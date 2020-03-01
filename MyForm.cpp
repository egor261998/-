#include "stdafx.h"
#include "main.h"
#include "CVal.h"
#include "MyForm.h"
#include "Metod1.h"


using namespace пики; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}