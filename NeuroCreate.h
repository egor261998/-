#pragma once
#include "stdafx.h"

class NeuroCreate
{
public:
	CNeuro* m_Neuro;

	VOID create(int iCount)
	{
		INT la[4] = { iCount, 8,6, 1 };
		m_Neuro = new CNeuro(CFunction::Bent_identity, CFunction::Bent_identityDx, 0.005f, TRUE, 4, la);
	}
};

