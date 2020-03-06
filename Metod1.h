#pragma once
#include "stdafx.h"
#include "Metod.h"
public class Metod1 : public Metod
{
public:
	struct MyStruct
	{
		DOUBLE only = 0.0;
		DOUBLE all = 0.0;
		DOUBLE disp = 0.0;
		DOUBLE only_div_all = 0.0;
		DOUBLE only_div_disp = 0.0;

		BOOL cheat = false;

		DOUBLE time;
	};

	Metod1(
		CONST DOUBLE MasPik[MAX_LEN_ALL_PIK],
		CONST INT iCountLine[MAX_COUNT_LINE],
		CONST DOUBLE MasLine[MAX_COUNT_LINE][MAX_LEN_LINE]) :
		Metod(MasPik, iCountLine, MasLine) {};
	


	MyStruct GetAnswer()
	{
		StartCounter();
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

		if (answer.only > 3.0 && answer.only_div_all > 3.0 && answer.only_div_disp > 1.5)
			answer.cheat = true;

		EndCounter();
		
		answer.time = time;

		return answer;
	}
};

