
#pragma once
#include "stdafx.h"
#include "ClassEntryVal.h"
#include "CVal.h"
#include "Neuro.h"
#include "CFunction.h"
#include "CNeuroAnswer.h"

class CMain
{
private:
	CNeuro* m_NeuroPik;
	CNeuro* m_NeuroLine;

	std::string FilePath;
	ClassEntryVal* val;
public:
	CMain(std::string path)
	{
		FilePath = path;
		val = new ClassEntryVal(FilePath);

		INT la[4] = { 20, 12, 8, 2 };
		INT la1[4] = { 20, 12, 8, 1 };
		m_NeuroPik = new CNeuro(CFunction::Identical, CFunction::IdenticalDx, 0.4f, TRUE, 4, la);
		m_NeuroLine = new CNeuro(CFunction::Identical, CFunction::IdenticalDx, 0.4f, TRUE, 4, la1);

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

	CNeuroAnswer CalNeuro()
	{
		CNeuroAnswer ans;

		memcpy(ans.resPik, m_NeuroPik->CalcNeuro(val->MAX_LEN_ALL_PIK, val->m_MasPik), ans.COUNT_PIK*sizeof(DOUBLE));
		
		for (int i = 0; i < ans.COUNT_LINE; i++)
			memcpy(&ans.resLine[i], m_NeuroLine->CalcNeuro(val->MAX_LEN_LINE, val->m_MasLine[i]), sizeof(DOUBLE));
		
		
		return ans;
	}

	VOID CorrectNeuro(CNeuroAnswer TrueAns)
	{
		m_NeuroPik->CalcNeuroError(TrueAns.COUNT_PIK, TrueAns.resPik);
		m_NeuroPik->CalcNeuroCorrect();

		for (int i = 0; i < TrueAns.COUNT_LINE; i++)
		{
			m_NeuroLine->CalcNeuroError(1, &TrueAns.resLine[i]);
			m_NeuroLine->CalcNeuroCorrect();
		}
	}
	
};



