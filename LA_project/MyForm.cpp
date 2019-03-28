#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace MetroFramework::Forms;

[STAThreadAttribute]
int WinMain() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LAproject::MyForm form;
	//LAproject::MetroForm form;
	//Application::Run(gcnew MetroForm());
	Application::Run(%form);
	return 0;
}


