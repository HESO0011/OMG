#include "MyForm.h"

#include "MyForm.h"
#include <Windows.h>
using namespace LAB2; // �������� �������
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
