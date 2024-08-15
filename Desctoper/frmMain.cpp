#include "frmMain.h"
#include <Windows.h>
#include <iostream>




//#include "powrprof.h"
//using namespace System::Runtime::InteropServices;


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]



void APPLICATION_START() {
	system("color 70");
	std::cout << "\n APPLICATION START\n\n";
	std::cout << "\tStatistic:\n\n";


	// Let's code
	std::cout << "\tInfo of Application here =/\n";

	std::cout << "\n\n";
}
void APPLICATION_FORM() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Desctoper::frmMain form;
	Application::Run(% form);
}
void APPLICATION_END() {
	std::cout << "\n APPLICATION END\n\n";
	system("pause");
}



/// ver 0.2.0
int main(array<String^>^ args) {
	APPLICATION_START();
	APPLICATION_FORM();
	APPLICATION_END();
	return 0;
}




/// make beautiful UI\UX openFileDialog