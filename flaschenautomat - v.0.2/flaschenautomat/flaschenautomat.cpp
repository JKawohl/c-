// flaschenautomat.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	// Getraenke Automat Version 0.1
	int einwurf = 0;
	cout << "Getraenke Automat | Bitte werfen sie 1 Euro ein: ";
	cin >> einwurf;

	// überpruefe Geldstueck
	if (einwurf == 1) {
		cout <<"\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n";
	}
	else {
		cout << "\nSie haben kein 1 Euro Stueck eingeworfen.\n";
	}
	getchar ();
	getchar();
	return 0;
}

