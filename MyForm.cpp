#include "stdafx.h"
#include "main.h"
#include "CVal.h"
#include "CGL.h"
#include "MyForm.h"
#include "Metod1.h"
#include "Metod2.h"


using namespace пики; // Название проекта
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}