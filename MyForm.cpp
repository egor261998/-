

#include <math.h>
#include <list>
#include <windows.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <string>
#include "Neuro.h"
#include "MyForm.h"



using namespace пики; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}