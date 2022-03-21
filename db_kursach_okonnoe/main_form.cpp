#include <Windows.h>
#include "main_form.h"

using namespace dbkursachokonnoe; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew main_form);
	return 0;
}
