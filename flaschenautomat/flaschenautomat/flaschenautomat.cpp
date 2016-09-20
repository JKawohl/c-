// flaschenautomat.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	// Getraenke Automat Version 0.2
	cout << "Waehlen Sie Ihr Getraenk aus:" << endl;
	int sorte = 0;
	cout << "Waehlen sie ihr Getraenk aus:\n";
	cout << "1) Wasser 0,50 Euro\n";
	cout << "2) Limonade 1,00 Euro\n";
	cout << "3) Bier 2,00 Euro\n\n";
	cout << "Geben sie 1, 2 oder 3 ein: ";
	
	cin >> sorte;

	if (sorte <= 3 && sorte > 0)
	{
		switch (sorte) {
		case 1: cout << "Bitte werfen Sie 0.50 Euro ein"; break;
		case 2: cout << "Bitte werfen Sie 1 Euro ein"; break;
		case 3: cout << "Bitte werfen Sie 2 Euro ein"; break;		
		}

	}else{   
		cout << "Falsche Eingabe! Bitte wiederholen Sie  Ihre Eingabe!";
		
			}
		
	float preis = 0;
	
	switch (sorte) {
	case 1: preis = 0.5; break;
	case 2: preis = 1.0; break;
	case 3: preis = 2.0; break;
		cout << preis;
	}
	// Aufforderung zur Bezahlung
	
	float einwurf = 0;
	cout << "\nBitte werfen sie"<< preis << "Euro ein: ";
	cin >> einwurf;


		// ueberpruefe Geldstueck
		if (sorte == preis) {
			cout << ("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
			getchar();
			getchar();
		}
		else {
			cout << "\nSie haben kein" << sorte << "Euro Stueck eingeworfen.\n";
			getchar();
			getchar();
		}

		getchar();
		getchar();
		return 0;

}
