#pragma once
#include "stdafx.h"
class NeuroGetSet
{
public:
	struct MyStruct
	{
		INT iC[MAX_LEN_LINE_NEURO];
		DOUBLE* pBuf[MAX_LEN_LINE_NEURO];
	};
private:
	std::string filename;

	std::ofstream out;
	bool bflagfreemem = false;
	
public:
	MyStruct m_Sub;

	NeuroGetSet(std::string filename)
	{
		this->filename = filename;

		out.open(filename, std::ios::app);
	}

	~NeuroGetSet()
	{
		
		out.close();
		FreeStruct();
	}

	MyStruct GetFromFile()
	{	
		std::ifstream file;
		file.open(filename);
		std::string strfromfile[MAX_LEN_LINE_NEURO];

		int iCount = 0;
		//сделать очищение структуры
		


		if (file.is_open())
		{
			CHAR* buf = new CHAR[100000];
			int iCount = 0;
			
			while (file.getline(buf, 100000))
			{
				strfromfile[iCount] = buf;
				iCount++;
			}

			delete[] buf;
		}

		file.close();

		

		for (int i = 0; i < MAX_LEN_LINE_NEURO;i++)
		{
			m_Sub.iC[i] = PreParse(strfromfile[i]);
			m_Sub.pBuf[i] = new DOUBLE[m_Sub.iC[i]];
			Parse(strfromfile[i], m_Sub.pBuf[i]);
		}

		bflagfreemem = true;
		return m_Sub;
	}

	VOID SetToFile(INT iCount, DOUBLE *pBuf)
	{	
		if (out.is_open())
		{
			std::string outstr;
			outstr = std::to_string(iCount);
			for (int i = 0; i < iCount; i++)
			{
				outstr += " ";
				outstr += std::to_string(pBuf[i]);
			}

			
			out << outstr << std::endl;
		}	
	}
	
private:
	VOID FreeStruct()
	{
		if (bflagfreemem)
		{
			for (int i = 0; i < MAX_LEN_LINE_NEURO; i++)
			{
				m_Sub.iC[i] = 0;

				delete[] m_Sub.pBuf[i];
			}
		}
	}

	INT PreParse(std::string str)
	{
		CHAR chBuf[32] = "\0";
			
		int iCNum = 0;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ')
			{
				chBuf[iCNum] = str[i];
				iCNum++;
			}
			else
			{
				break;
			}

		}

		return atoi(chBuf);
	}

	VOID Parse(std::string str, DOUBLE *pBuf)
	{
		CHAR chBuf[32] = "\0";

		int iC = 0;
		int iCNum = 0;
		bool bFlag = false;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ')
			{
				if(bFlag)
				{ 
					chBuf[iCNum] = str[i];
					iCNum++;
				}
			}
			else
			{			
				if (!bFlag)
				{
					bFlag = true;
				}
				else
				{
					pBuf[iC] = atof(chBuf);
					memset(chBuf, 0, sizeof(chBuf));
					iCNum = 0;
					iC++;
				}			
			}
		}

		pBuf[iC] = atof(chBuf);
	}

};

