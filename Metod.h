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
	DOUBLE *m_MasPik;

	//кол-во линий
	INT *m_iCountLine;
	//масив со значениями линий
	DOUBLE *m_MasLine;
public:
	
	Metod(
		DOUBLE *MasPik,
		INT *iCountLine,
		DOUBLE *MasLine)
	{
		
		m_MasPik = MasPik;
		m_iCountLine = iCountLine;
		m_MasLine = MasLine;

		
		
		
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

