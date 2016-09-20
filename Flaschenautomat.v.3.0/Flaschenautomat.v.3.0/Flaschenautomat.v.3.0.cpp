// Flaschenautomat.v.3.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Getraenkeautomat v.3.0" << endl;
	int sorte = 0;	
	cout << "Bitte Waehlen Sie ein Getraenk aus" << endl;
	cout << "1) Wasser" << endl;
	cout << "2) Limonade" << endl;
	cout << "3) Bier" << endl;
	cin >> sorte;

	// Menge
	int menge = 1;
	cout << "Bitte geben Sie die gewuenschte Menge ein" << endl;
	cin >> menge;

	if (sorte > 0 && sorte <= 3)
	{

		float preis = 0;
		switch (sorte) { 
		case 1: preis = 0.5; break;
		case 2: preis = 1.0; break;
		case 3: preis = 2.0; break;

		}

		float zuZahlen = (preis * menge);

		cout << "Der gesamtpreis betraegt: " << zuZahlen << " Euro, bitte werfen Sie " << zuZahlen <<" Euro ein" ;
		float einwurf = 0;
		
		do {
			cout << "\n es fehlen noch" << zuZahlen << "Euro" << endl;
			cout << "Bitte werfen Sie ein Geldstueck ein " << endl;
			cin >> einwurf;
			zuZahlen -= einwurf;

		} while (zuZahlen > 0.0);

 		if (zuZahlen == einwurf) {
			cout << "Vielen Danke bitte entnehmen Sie ihr Getraenk!";
		}
		else { cout << "Sie haben kein " << zuZahlen << " Geldstueck eingeworfen" << endl; }
	}
	else { cout << " Falsche Eingabe:Bitte waehlen Sie zwischen den drei Getraenken" << endl; }

	getchar();
	getchar();

	return 0;
}

