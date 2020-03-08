#pragma once
#include "stdafx.h"
#include "Metod.h"
class Metod2_neuro : public Metod
{
	CNeuroLearn* m_NeuroLearn;
public:
	struct MyStruct
	{
		DOUBLE only = 0.0;
		DOUBLE all = 0.0;

		DOUBLE only_div_all = 0.0;
		DOUBLE LineDisp[MAX_COUNT_LINE] = { 0.0 };

		std::string LineList[MAX_COUNT_LINE];

		BOOL cheat = false;

		DOUBLE time;
	};

	Metod2_neuro(
		DOUBLE* MasPik,
		INT* iCountLine,
		DOUBLE* MasLine, CNeuroLearn *NeuroLearn) :
		Metod(MasPik, iCountLine, MasLine) 
	{
		m_NeuroLearn = NeuroLearn;
	};



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

		if (answer.only > 3.0 && answer.only_div_all > 3.0)
			answer.cheat = true;

		for (int i = 0; i < MAX_COUNT_LINE; i++)
		{


			
			

			answer.LineDisp[i] = m_NeuroLearn->calcNeuro(m_iCountLine[i], &m_MasLine[i * MAX_LEN_LINE]);

			if (answer.LineDisp[i] > 0.3)
				answer.cheat = false;
		}
		EndCounter();
		answer.time = time;
		return answer;
	}


	

};

