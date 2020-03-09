#pragma once
#include "stdafx.h"
#include "NeuroCreate.h"
class CNeuroLearn
{
	
	NeuroCreate* m_NeuroCreate;
	double res = 0.0;
public:
	CONST INT START = START_LEN_NEURO;
	CONST INT END = START_LEN_NEURO;
	CONST INT MAX = MAX_LEN_LINE_NEURO;
	CNeuroLearn()
	{
		m_NeuroCreate = new NeuroCreate[MAX_LEN_LINE_NEURO];
		for (int i = 0; i < MAX_LEN_LINE_NEURO; i++)
		{
			m_NeuroCreate[i].create(i + START_LEN_NEURO);
			
		}
		
	}

	CNeuro* GetNeuro(INT ic)
	{
		return m_NeuroCreate[ic].m_Neuro;
	}

	DOUBLE threadFunction()
	{
		double res=0.0;
		
		DOUBLE input[MAX_LEN_LINE];
		

		for (int j = 0; j < MAX_LEN_LINE; j++)
			input[j] = (double)(rand() % 1000) / 100.0;

		for (int i = 0; i < MAX_LEN_LINE_NEURO; i++)
		{
			INT iCount = i + START_LEN_NEURO;

			DOUBLE *output = m_NeuroCreate[i].m_Neuro->CalcNeuro(iCount, input);
			DOUBLE ans = calc(iCount, input);
			m_NeuroCreate[i].m_Neuro->CalcNeuroError(1, &ans);
			m_NeuroCreate[i].m_Neuro->CalcNeuroCorrect();
			res += m_NeuroCreate[i].m_Neuro->GetError();
		}
		this->res = res;
		return res;
	}

	DOUBLE calcNeuro(INT iCount, DOUBLE* input)
	{
		DOUBLE* output = m_NeuroCreate[iCount- START_LEN_NEURO].m_Neuro->CalcNeuro(iCount, input);

		return (output[0]);
	}

	DOUBLE calc(INT iCount,DOUBLE *input)
	{
		DOUBLE aLine;
		DOUBLE bLine;
		DOUBLE aSquare;
		DOUBLE bSquare;
		DOUBLE cSquare;

		LineRegression(iCount, input, &aLine, &bLine);
		SquareRegression(iCount, input, &aSquare, &bSquare, &cSquare);

		return CalcDif(iCount, aLine, bLine, aSquare, bSquare, cSquare);
	}

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
		DOUBLE ASquare, DOUBLE BSquare, DOUBLE CSquare)
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


		return displine;
	}
};

