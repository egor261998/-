
#pragma once
#include "stdafx.h"
#include "ClassEntryVal.h"
#include "CVal.h"
#include "Neuro.h"
#include "CFunction.h"
#include "CNeuroAnswer.h"
#include "Metod1.h"
#include "Metod2.h"

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
		INT la1[4] = { 50, 12, 8, 1 };
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

	Metod1::MyStruct GetAnsMetod1()
	{
		Metod1 answer = Metod1(val->m_MasPik, val->m_iCountLine, val->m_MasLine);

		return answer.GetAnswer();
	}

	Metod2::MyStruct GetAnsMetod2()
	{
		Metod2 answer = Metod2(val->m_MasPik, val->m_iCountLine, val->m_MasLine);
		
		return answer.GetAnswer();
	}
	
};



