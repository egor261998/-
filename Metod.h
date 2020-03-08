#pragma once
#include "stdafx.h"

class Metod
{
public:
	
	

	DOUBLE time;
private:
	LONGLONG CounterStart;
	LONGLONG timeend;
	DOUBLE PCFreq;
protected:
	//�������� ���
	DOUBLE *m_MasPik;

	//���-�� �����
	INT *m_iCountLine;
	//����� �� ���������� �����
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

