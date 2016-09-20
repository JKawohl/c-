// Flaschenautomat.2.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Getraenkeautomat v.2.0" << endl;
	
	int sorte = 0;
	
	cout << "Bitte Wählen Sie ein Getraenk aus" << endl;
	cout << "1) Wasser" << endl;
	cout << "2) Limonade" << endl;
	cout << "3) Bier" << endl;

	cin >> sorte;
	if (sorte > 0 && sorte <= 3) 
	{

		float preis = 0;
		switch (sorte) {
		case 1: preis = 0.5; break;
		case 2: preis = 1.0; break;
		case 3: preis = 2.0; break;

		}

		float einwurf = 0;
		cout << "Bitte werfen Sie " << preis << "Euro ein" << endl;
		cin >> einwurf;

		if (einwurf == preis) {
			cout << "Vielen Danke bitte entnehmen Sie ihr Getränk!";
		}
		else { cout << "Sie haben kein" << preis << "eingeworfen" << endl; }
	}
	else { cout << "Bitte waehlen Sie zwischen den drei Getraenken" << endl; }

		

	getchar();
	getchar();
	
	return 0;
}

