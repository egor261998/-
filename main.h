
#pragma once
#include "stdafx.h"



#include "CNeuroAnswer.h"
#include "Metod1.h"
#include "Metod2.h"
#include "Metod2_neuro.h"

class CMain
{
private:
	Metod1* answer1;
	Metod2* answer2;
	Metod2_neuro* answer2_neuro;
	CNeuroLearn* m_NeuroLearn;

	std::string FilePath;
	ClassEntryVal* val;

private:
	LONGLONG CounterStart;
	LONGLONG timeend;
	DOUBLE PCFreq;
	DOUBLE time;

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
public:
	
	CMain(std::string path)
	{
		FilePath = path;
		val = new ClassEntryVal(FilePath);
		answer1 = new Metod1(val->m_MasPik, val->m_iCountLine, val->m_MasLine[0]);
		answer2 = new Metod2(val->m_MasPik, val->m_iCountLine, val->m_MasLine[0]);
		

		m_NeuroLearn = new CNeuroLearn();

		

		answer2_neuro = new Metod2_neuro(val->m_MasPik, val->m_iCountLine, val->m_MasLine[0], m_NeuroLearn);
				
	}

	VOID ReadNext()
	{
		val->ReadNext();
	}

	std::string GetFileName()
	{
		return FilePath;
	}

	std::string GetPlayerName()
	{
		return val->PlayerName;
	}

	DWORD GetCurCount()
	{
		return val->m_dwCount;
	}

	CVal GetValPik(DWORD Index)
	{
		return val->m_MasValPik.m_Mas[Index];
	}

	CVal GetValLine(DWORD Index)
	{
		return val->m_MasValLine.m_Mas[Index];
	}

	Metod1::MyStruct GetAnsMetod1()
	{
		return answer1->GetAnswer();
	}

	Metod2::MyStruct GetAnsMetod2()
	{	
		return answer2->GetAnswer();
	}
	Metod2_neuro::MyStruct GetAnsMetod2_neuro()
	{
		return answer2_neuro->GetAnswer();
	}

	DOUBLE NeoroLearn(INT iCount)
	{
		StartCounter();
		for (int i = 0; i < iCount; i++)
		{
			m_NeuroLearn->threadFunction();
		}
		EndCounter();

		return time;
	}

	VOID GetWeightFromNeuroAndSavaToFile(std::string Path)
	{
		NeuroGetSet nGS(Path);
		for (int i = 0; i < m_NeuroLearn->MAX; i++)
		{			
			CNeuro* CurNeuro = m_NeuroLearn->GetNeuro(i);
			int iCountEl = CurNeuro->GetMatrixWeightSize();
			DOUBLE* pBuf = new DOUBLE[iCountEl];
			CurNeuro->GetMatrixWeight(iCountEl, pBuf);
			nGS.SetToFile(iCountEl, pBuf);
			delete[] pBuf;
		}
	}

	VOID GetWeightFromFileAndSetToNeuro(std::string Path)
	{
		NeuroGetSet nGS(Path);
		NeuroGetSet::MyStruct ans = nGS.GetFromFile();
		for (int i = 0; i < m_NeuroLearn->MAX; i++)
		{
			CNeuro* CurNeuro = m_NeuroLearn->GetNeuro(i);
			CurNeuro->SetMatrixWeight(ans.iC[i], ans.pBuf[i]);
		}
	}


	
};



