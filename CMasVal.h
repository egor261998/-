#pragma once
#include "stdafx.h"
#include "CVal.h"
class CMasVal
{	
public:
	static CONST DWORD MAXLEN = 100;
	CVal m_Mas[MAXLEN];

	void Refresh()
	{
		for (DWORD i = 0; i < MAXLEN; i++)
		{
			m_Mas[i].show = false;
			m_Mas[i].val = 0.0;
		}
	}
};

