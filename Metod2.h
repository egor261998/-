#pragma once
#include "stdafx.h"
#include "Metod.h"
public class Metod2 : public Metod
{
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

	Metod2(
		DOUBLE* MasPik,
		INT* iCountLine,
		DOUBLE *MasLine) :
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

		if (answer.only > 3.0 && answer.only_div_all > 3.0)
			answer.cheat = true;

		for (int i = 0; i < MAX_COUNT_LINE; i++)
		{	
			DOUBLE aLine;
			DOUBLE bLine;
			DOUBLE aSquare;
			DOUBLE bSquare;
			DOUBLE cSquare;

			LineRegression(m_iCountLine[i], &m_MasLine[i * MAX_LEN_LINE], &aLine, &bLine);
			SquareRegression(m_iCountLine[i], &m_MasLine[i * MAX_LEN_LINE], &aSquare, &bSquare, &cSquare);
			
			answer.LineDisp[i] = CalcDif(m_iCountLine[i], aLine, bLine, aSquare, bSquare, cSquare,&answer.LineList[i]);

			if(answer.LineDisp[i]>0.3)
				answer.cheat = false;
		}
		EndCounter();
		answer.time = time;
		return answer;
	}

private:
	
	VOID LineRegression(INT iCount, DOUBLE* mas, DOUBLE* pA, DOUBLE* pB)
	{
		DOUBLE xi = 0.0;
		DOUBLE xxi = 0.0;

		DOUBLE yi = 0.0;

		DOUBLE xiyi = 0.0;

		for (int i = 0; i < iCount; i++)
		{
			DOUBLE x = DOUBLE(i + 1);
			xi += x;
			xxi += x * x;
			yi += mas[i];
			xiyi += x * mas[i];
		}

		(*pA) = (xi * yi - iCount * xiyi) / (xi * xi - iCount * xxi);
		(*pB) = (xi * xiyi - xxi * yi) / (xi * xi - iCount * xxi);
	}

	VOID SquareRegression(INT iCount, DOUBLE* mas, DOUBLE* pA, DOUBLE* pB, DOUBLE* pC)
	{
		DOUBLE xi = 0.0;
		DOUBLE xxi = 0.0;
		DOUBLE xxxi = 0.0;
		DOUBLE xxxxi = 0.0;

		DOUBLE yi = 0.0;

		DOUBLE xiyi = 0.0;
		DOUBLE xxiyi = 0.0;

		for (int i = 0; i < iCount; i++)
		{
			DOUBLE x = DOUBLE(i + 1);
			DOUBLE y = mas[i];
			xi += x;
			xxi += x * x;
			xxxi += x * x * x;
			xxxxi += x * x * x * x;
			yi += y;
			xiyi += x * y;
			xxiyi += x * x * y;
		}

		DOUBLE a[3] = { xxi,xxxi,xxxxi };
		DOUBLE b[3] = { xi,xxi,xxxi };
		DOUBLE c[3] = { (DOUBLE)iCount,xi,xxi };
		DOUBLE vec[3] = { yi,xiyi,xxiyi };

		DOUBLE tmp = 0.0;
		//убираем a1 в 0
		tmp = a[1] / a[0];

		a[1] -= a[0] * tmp;
		b[1] -= b[0] * tmp;
		c[1] -= c[0] * tmp;
		vec[1] -= vec[0] * tmp;

		//убираем a2 в 0
		tmp = a[2] / a[0];

		a[2] -= a[0] * tmp;
		b[2] -= b[0] * tmp;
		c[2] -= c[0] * tmp;
		vec[2] -= vec[0] * tmp;

		//убираем b2 в 0
		tmp = b[2] / b[1];

		b[2] -= b[1] * tmp;
		c[2] -= c[1] * tmp;
		vec[2] -= vec[1] * tmp;

		/*(*pC)= vec[2] / c[2];
		(*pB)*/
		//убираем c1 в 0
		tmp = c[1] / c[2];

		c[1] -= c[2] * tmp;
		vec[1] -= vec[2] * tmp;
		
		//убираем c0 в 0
		tmp = c[0] / c[2];

		c[0] -= c[2] * tmp;
		vec[0] -= vec[2] * tmp;

		//убираем b0 в 0
		tmp = b[0] / b[1];

		b[0] -= b[1] * tmp;
		vec[0] -= vec[1] * tmp;

		(*pA) = vec[0] / a[0];
		(*pB) = vec[1] / b[1];
		(*pC) = vec[2] / c[2];
	}

	DOUBLE CalcDif(INT iCount,
		DOUBLE ALine, DOUBLE BLine,
		DOUBLE ASquare, DOUBLE BSquare, DOUBLE CSquare,
		std::string *str)
	{
		DOUBLE* res = new DOUBLE[iCount];
		DOUBLE avg = 0.0;
		for (int i = 0; i < iCount; i++)
		{
			DOUBLE x = DOUBLE(i + 1);

			DOUBLE yLine = ALine * x + BLine;
			DOUBLE ySquare = ASquare * x * x + BSquare * x + CSquare;
			res[i] = fabs(fabs(yLine) - fabs(ySquare));

			avg += res[i];
		}

		//посчет среднего
		avg /= (DOUBLE)(iCount);

		DOUBLE displine = 0.0;
		for (int i = 0; i < iCount; i++)
		{
			displine += pow(avg - res[i], 2.0);
		}
		displine = sqrt(displine / ((DOUBLE)iCount));

		delete[] res;

		CHAR buf[100] = "\0";
		sprintf_s(buf, "a=%.3f d=%.3f", avg, displine);
		(*str) = buf;

		return displine;
	}
};

