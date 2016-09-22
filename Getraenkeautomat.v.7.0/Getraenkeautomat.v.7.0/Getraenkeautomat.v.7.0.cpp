// Getraenkeautomat.v.7.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int auswahlGetraenkeSorte();
int eingabeMenge();

float ermittlePreis(int sorte);
float bezahlen(float zuZahlen);
void ausgabeGetraenke(int sorte, int menge);
int pruefeGeldstueck(float muenze);
void ausgabeGetraenke(int sorte, int menge);

//main
int main()
{
	cout << "Getraenkeautomat v.7.0" << endl;

	int sorte, menge;
	float preis, zuZahlen, gezahlt;

	sorte = auswahlGetraenkeSorte();
	preis = ermittlePreis(sorte);
	menge = eingabeMenge();
	zuZahlen = preis * menge;
	gezahlt = bezahlen(zuZahlen);

	if (gezahlt >= zuZahlen) {
		ausgabeGetraenke(sorte, menge);
		cout << "Vielen Dank, bitte entnehmen Sie ihre Getraenke" << endl;
	}
	else
	{
		cout << "Bezahlvorgang abgebrochen" << endl;
		cout << "Bitte entnehmen Sie " << gezahlt << "Euro";
	}

	getchar();
	getchar();
	return 0;
}

// Funktionen
int auswahlGetraenkeSorte() {
	int sorte;
	cout << "Waehlen sie ihr Getraenk aus" << endl;
	cout << "1) Wasser (0,50 Euro)" << endl;
	cout << "2) Limonade (1,00 Euro)" << endl;
	cout << "3) Bier (2,00 Euro)" << endl;
	cout << "Geben sie 1, 2 oder 3 ein: " << endl;
	cin >> sorte;
	return sorte;
}
int eingabeMenge() {
	int menge = 1;
	cout << "Geben sie die gewuenschte Menge ein: ";
	cin >> menge;
	return menge;
}
/*	ermittelt den Preis zu einer Sorte
Parameter:	sorte, Nummer der Sorte
Return-Value:	Preis
*/
float ermittlePreis(int sorte) {
	float preis = 0;
	switch (sorte) {
	case 1: preis = 0.5; break;
	case 2: preis = 1.0; break;
	case 3: preis = 2.0; break;
	}
	return preis;
}
float bezahlen(float zuZahlen) {
	cout << "--- Bezahlvorgang ---" << endl;
	cout << "Bezahlvorgang abbrechen mit 0" << endl;
	float einwurf, gezahlt = 0;
		
	do {
		cout << "Es fehlen noch " << zuZahlen - gezahlt << " Euro.";
		cout << "Bitte werfen sie ein Geldstueck ein: ";
		cin >> einwurf;

		if (einwurf == 0){
			break;
		}
		if (pruefeGeldstueck(einwurf)) {
			gezahlt += einwurf;
		}
		else {
			cout << "Ihr Geldstueck ist ungueltig."<< endl;
		}

		
	} while (gezahlt < zuZahlen);
	
	return gezahlt;
}
int pruefeGeldstueck(float muenze) {
	// Muenzwert in ganze Zahl umrechnen, also in Cent.
	// Da die case Anweisung nicht mit floats arbeiten kann.
	int cent = muenze * 100;
	switch (cent) {
	case 5:		return 1;
	case 10:	return 1;
	case 20:	return 1;
	case 50:	return 1;
	case 100:	return 1;
	case 200:	return 1;
	default:	return 0;
	}
}
void ausgabeGetraenke(int sorte, int menge) {
	cout << "--- Getraenkeausgabe ---" << endl;
	int i;
	for (i = 0; i < menge; i++) {
		cout << " Flasche " << i+1 << "von " << menge << " der Sorte " << sorte << " wurde ausgegeben." <<endl;
		cout << endl;
	}
}





