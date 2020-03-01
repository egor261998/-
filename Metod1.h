#pragma once
#include "stdafx.h"
#include "ClassEntryVal.h"
class Metod1
{
public:
	struct MyStruct
	{
		DOUBLE only = 0.0;
		DOUBLE all = 0.0;
		DOUBLE disp = 0.0;
		DOUBLE only_div_all = 0.0;
		DOUBLE only_div_disp = 0.0;
	};
	static CONST DWORD MAX_LEN_PIK = ClassEntryVal::MAX_LEN_PIK;
	static CONST DWORD MAX_LEN_ALL_PIK = ClassEntryVal::MAX_LEN_ALL_PIK;

	static CONST DWORD MAX_LEN_LINE = ClassEntryVal::MAX_LEN_LINE;
	static CONST DWORD MAX_COUNT_LINE = ClassEntryVal::MAX_COUNT_LINE;
private:
	//значение пик
	DOUBLE m_MasPik[MAX_LEN_ALL_PIK] = { 0.0 };

	//кол-во линий
	INT m_iCountLine[MAX_COUNT_LINE] = { 0 };
	//масив со значениями линий
	DOUBLE m_MasLine[MAX_COUNT_LINE][MAX_LEN_LINE];
public:
	Metod1(
		CONST DOUBLE MasPik[MAX_LEN_ALL_PIK], 
		CONST INT iCountLine[MAX_COUNT_LINE], 
		CONST DOUBLE MasLine[MAX_COUNT_LINE][MAX_LEN_LINE])
	{
		for (int i = 0; i < MAX_LEN_ALL_PIK; i++)
		{
			m_MasPik[i] = MasPik[i];
		}

		for (int i = 0; i < MAX_COUNT_LINE; i++)
		{
			m_iCountLine[i] = iCountLine[i];

			for (int j = 0; j < m_iCountLine[i]; j++)
			{
				m_MasLine[i][j] = MasLine[i][j];
			}
		}
	}

	MyStruct GetAnswer()
	{
		MyStruct answer;

		//подсчет пик

		//начальное значение центральной пики
		int iStartCenter = 2;

		int iOnlyCount = 0;
		int iAllCount = 0;
		for (int i = 0; i < MAX_LEN_ALL_PIK; i++)
		{		
			if (iStartCenter == i)
			{		
				answer.only += m_MasPik[i];
				iStartCenter += MAX_LEN_PIK;
				iOnlyCount++;
			}
			else
			{
				answer.all += m_MasPik[i];
				iAllCount++;
			}
		}
		//среднее для центрального значения
		answer.only /= DOUBLE(iOnlyCount);

		//среднее для крайнех значений
		answer.all /= DOUBLE(iAllCount);

		answer.only_div_all = answer.only / answer.all;

		//подсчет общей дисперсии
		for (int i = 0; i < MAX_COUNT_LINE; i++)
		{
			//посчет среднего
			DOUBLE avg = 0.0;
			for (int j = 0; j < m_iCountLine[i]; j++)
			{
				avg += m_MasLine[i][j];
			}

			avg /= (DOUBLE)(m_iCountLine[i]);

			//подсчет средней дисперсии
			DOUBLE displine = 0.0;
			for (int j = 0; j < m_iCountLine[i]; j++)
			{
				displine += pow(avg - m_MasLine[i][j], 2.0);
			}
			displine = sqrt(displine / ((DOUBLE)(m_iCountLine[i])));
			
			answer.disp += displine;
		}

		answer.only_div_disp = answer.only / answer.disp;

		return answer;
	}
};

