#include "Properties.h"

[System::STAThread]

void main(array<System::String^>^ args)

{

    System::Windows::Forms::Application::EnableVisualStyles();

    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);

    TestCLRProject::Properties form;

    System::Windows::Forms::Application::Run(% form);

}