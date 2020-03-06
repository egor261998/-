#pragma once
#include "stdafx.h"
#include "ClassEntryVal.h"
class Metod
{
public:
	
	static CONST DWORD MAX_LEN_PIK = ClassEntryVal::MAX_LEN_PIK;
	static CONST DWORD MAX_LEN_ALL_PIK = ClassEntryVal::MAX_LEN_ALL_PIK;

	static CONST DWORD MAX_LEN_LINE = ClassEntryVal::MAX_LEN_LINE;
	static CONST DWORD MAX_COUNT_LINE = ClassEntryVal::MAX_COUNT_LINE;

	DOUBLE time;
private:
	LONGLONG CounterStart;
	LONGLONG timeend;
	DOUBLE PCFreq;
protected:
	//значение пик
	DOUBLE m_MasPik[MAX_LEN_ALL_PIK] = { 0.0 };

	//кол-во линий
	INT m_iCountLine[MAX_COUNT_LINE] = { 0 };
	//масив со значениями линий
	DOUBLE m_MasLine[MAX_COUNT_LINE][MAX_LEN_LINE];
public:
	
	Metod(
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

	void StartCounter()
	{
		LARGE_INTEGER li;
		QueryPerformanceFrequency(&li);
			

		PCFreq = double(li.QuadPart) / 1000.0;

		QueryPerformanceCounter(&li);
		CounterStart = li.QuadPart;
	}
	VOID EndCounter()
	{
		LARGE_INTEGER li;
		QueryPerformanceCounter(&li);
		time = double(li.QuadPart - CounterStart) / PCFreq;
	}
};

