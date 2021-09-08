#include "TicTacToe.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GameTicTac::TicTacToe forma;
	Application::Run(%forma);

	return 0;
}