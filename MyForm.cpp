#include "MyForm.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Orignalproject::MyForm frm;
	Application::Run(% frm);
}