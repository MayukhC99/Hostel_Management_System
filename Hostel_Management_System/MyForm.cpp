#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hostel_Management_System::MyForm form;
	Application::Run(%form);
}
