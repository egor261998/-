#pragma once
#include "stdafx.h"
#include "CMasVal.h"
class ClassEntryVal
{
public:
	static CONST DWORD MAX_LEN_PIK = 5;
	static CONST DWORD MAX_COUNT_PIK = 4;
	static CONST DWORD MAX_LEN_ALL_PIK = MAX_COUNT_PIK * MAX_LEN_PIK;

	static CONST DWORD MAX_LEN_LINE = 20;
	static CONST DWORD MAX_COUNT_LINE = 3;


	//значение пик
	DOUBLE m_MasPik[MAX_LEN_ALL_PIK] = { 0.0 };
	
	//кол-во линий
	INT m_iCountLine[MAX_COUNT_LINE] = { 0 };
	//масив со значениями линий
	DOUBLE m_MasLine[MAX_COUNT_LINE][MAX_LEN_LINE];

	//вывод значений для графика
	DWORD m_dwCount = 0;
	CMasVal m_MasValPik;
	CMasVal m_MasValLine;

	//имя подозреваемого
	std::string PlayerName;
private:
	//значение всех строк файла
	std::string* m_MasStr;

	std::string FilePath;

	INT m_iCount = 0;
	INT m_iCountCur = 0;
	INT m_iCountCurStart = 0;
	INT m_iCountCurEnd = 0;
	
public:
	ClassEntryVal(std::string Path)
	{
		FilePath = Path;
		std::ifstream file;
		std::string path;
		

		
		file.open(FilePath);

		if (file.is_open())
		{
			m_MasStr = new std::string[get_file_numstr(FilePath)];
			CHAR buf[OFS_MAXPATHNAME];
			m_iCount = 0;
			while (file.getline(buf, sizeof(buf)))
			{
				
				m_MasStr[m_iCount] = buf;
				m_iCount++;
			}
		}

		//ReadNext();
		
	}

private:
	VOID parse(std::string str, PINT piNum, PFLOAT pfVal, PFLOAT pfVal2)
	{
		WCHAR wchBuf[MAX_COUNT_PIK][MAX_LEN_LINE] = { L"\0" };

		int iC = 0;
		int iCNum = 0;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ')
			{
				wchBuf[iC][iCNum] = str[i];
				iCNum++;
			}
			else
			{
				iCNum = 0;
				iC++;
			}

		}

		(*piNum) = _wtoi(wchBuf[0]);
		(*pfVal) = (float)_wtof(wchBuf[1]);
		(*pfVal2) = (float)_wtof(wchBuf[2]);
	}

public:
	VOID ReadNext()
	{
		if (m_iCountCur >= m_iCount)
			m_iCountCur = 0;

		m_iCountCurStart = m_iCountCur;
		while (m_MasStr[m_iCountCur].compare("[end]"))
		{
			m_iCountCur++;
		}
		m_iCountCur += 1;
		m_iCountCurEnd = m_iCountCur;

		m_MasValPik.Refresh();
		m_MasValLine.Refresh();
		

		int iNum;
		float aval;
		float aval2;
		float bval;
		float bval2;

		int iCurNum = -1;
		int iCurStartFill = 0;
		int iCount = 0;
		int iCountAll = 0;
		int iCountAllPik = 0;
		int iCountPik = 0;

		float a=0.0;
		float b=0.0;

		PlayerName = m_MasStr[m_iCountCurStart];
		for (int i = m_iCountCurStart + 2; i < (m_iCountCurEnd - 1); i++)
		{

			parse(m_MasStr[i - 1], &iNum, &aval, &aval2);
			parse(m_MasStr[i], &iNum, &bval, &bval2);

			a = aval;
			b = bval;

			m_MasValLine.m_Mas[iCountAll].val = fabs(a);
			m_MasValLine.m_Mas[iCountAll].show = true;

			if (iCurNum >= 0 && iCurStartFill <= i)
			{
				this->m_iCountLine[iCurNum] = iCount;
				this->m_MasLine[iCurNum][iCount] = fabs(b);
				iCount++;
			}

			if ((a > 0 && b < 0 || a < 0 && b > 0) && ((m_iCountCurStart + 2) < i))
			{
				if (iCurNum >= 0)
				{
					this->m_iCountLine[iCurNum] -= 2;
					for (int j = this->m_iCountLine[iCurNum]; j < 20; j++)
					{
						this->m_MasLine[iCurNum][j] = 0.0;
					}
				}
				iCount = 0;
				iCurNum++;
				iCurStartFill = i + 3;
				iCountAllPik = 0;
				float bb=0.0;
				for (int j = i - 1; j < i + 3; j++)
				{
					parse(m_MasStr[j - 1], &iNum, &aval, &aval2);
					parse(m_MasStr[j], &iNum, &bval, &bval2);
					aval2 = fabs(aval2);
					bval2 = fabs(bval2);
					bb = bval2;
					this->m_MasPik[iCountPik] = aval2;
					m_MasValPik.m_Mas[iCountAll + iCountAllPik-1].val = aval2;
					m_MasValPik.m_Mas[iCountAll + iCountAllPik-1].show = true;
					
					iCountPik++;
					iCountAllPik++;
				}

				this->m_MasPik[iCountPik] = bb;
				iCountPik++;
				
				m_MasValPik.m_Mas[iCountAll + iCountAllPik-1].val = bb;
				m_MasValPik.m_Mas[iCountAll + iCountAllPik-1].show = true;
							
			}
			iCountAll++;
		}

		m_dwCount = iCountAll + 1;
		
		m_MasValLine.m_Mas[iCountAll].val = fabs(b);
		m_MasValLine.m_Mas[iCountAll].show = true;

		for (DWORD i = 1; i < m_dwCount-1; i++)
		{
			if(m_MasValPik.m_Mas[i-1].show && m_MasValPik.m_Mas[i].show && m_MasValPik.m_Mas[i+1].show)
				m_MasValLine.m_Mas[i].show = false;
		}
	}

private:
	INT get_file_numstr(std::string filename)
	{
		std::wifstream file;
		int iCount = 0;

		file.open(filename);

		if (file.is_open())
		{
			while (file.ignore(1000000, '\n'))
			{

				iCount++;
			}
		}
		return iCount;
	}

};

