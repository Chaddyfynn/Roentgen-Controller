#include "Home.h"

[System::STAThread]

void main()
// 
{

    System::Windows::Forms::Application::EnableVisualStyles();

    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

    TestCLRProject::MyForm form;

    System::Windows::Forms::Application::Run(% form);

}