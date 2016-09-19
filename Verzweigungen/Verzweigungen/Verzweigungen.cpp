// Verzweigungen.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
	// Getraenke Automat Version 0.1

int einwurf=0;

cout << "Getraenke Automat" << endl;
cout << "Bitte werfen sie 1 Euro ein: ";

cin >> einwurf;

if (einwurf == 1)
{
	cout << "Vielen Dank, bitte entnehmen sie ihr Getraenk.";
	getchar;
}

else
{
	cout << "Sie haben kein 1 Euro Stueck eingeworfen.";
	getchar;
}  

return 0;
}

