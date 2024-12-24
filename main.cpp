#include "Calculator.h"

using namespace System;
using namespace CalculatorApp;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Calculator^ calcForm = gcnew Calculator();
    Application::Run(calcForm);
    return 0;
}
