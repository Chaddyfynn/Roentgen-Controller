#include "MyForm.h"

[System::STAThread]

void main(array<System::String^>^ args)

{

    System::Windows::Forms::Application::EnableVisualStyles();

    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

    TestCLRProject::MyForm form;

    System::Windows::Forms::Application::Run(% form);

}