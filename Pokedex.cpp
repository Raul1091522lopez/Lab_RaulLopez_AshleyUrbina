#include "Pokedex.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab5PokemonsJavierLopez1049722::Pokedex form;
	Application::Run(% form);
	return 0;

};


