#pragma once
#include "stdafx.h"
#include "ClassEntryVal.h"
class CNeuroAnswer
{
public:
	static CONST DWORD COUNT_PIK = 2;
	static CONST DWORD COUNT_LINE = MAX_COUNT_LINE;

	DOUBLE resPik[COUNT_PIK] = { 0.0 };
	DOUBLE resLine[COUNT_LINE] = { 0.0 };
	
};

