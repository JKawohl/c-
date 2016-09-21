// Flaschenautomazt.v.6.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int auswahlGetraenkeSorte();
int eingabeMenge();
float ermittlePreis(int sorte);
void bezahlen (float zuZahlen);
void ausgabeGetraenke(int sorte, int menge);

int main()
{
	cout << "Getraenkeautomat v.6.0" << endl;

	int sorte, menge;
	float preis, zuZahlen;

	sorte = auswahlGetraenkeSorte();
	preis = ermittlePreis(sorte);
	menge = eingabeMenge();
	zuZahlen = preis * menge;
	bezahlen (zuZahlen);
	
	
	ausgabeGetraenke(sorte, menge);
	cout << "Vielen Dank, bitte entnehmen Sie ihre Getränke" << endl;

	getchar();
	getchar();
	return 0;
}

// Funktionen
int auswahlGetraenkeSorte() {
	int sorte;
	cout <<"Waehlen sie ihr Getraenk aus:\n";
	cout <<"1) Wasser (0,50 Euro)\n";
	cout <<"2) Limonade (1,00 Euro)\n";
	cout <<"3) Bier (2,00 Euro)\n\n";
	cout <<"Geben sie 1, 2 oder 3 ein: ";
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
void bezahlen (float zuZahlen) {
	cout << "--- Bezahlvorgang ---" << endl;
	cout << "Bezahlvorgang abbrechen mit 0";
	float einwurf;
	do {
		cout << "Es fehlen noch " << zuZahlen <<" Euro.";
		cout << "Bitte werfen sie ein Geldstueck ein: ";
		cin >>einwurf;
		// eingeworfenen Betrag anrechnen
		zuZahlen -= einwurf;
	} while (zuZahlen > 0.0);
	return;
}
void ausgabeGetraenke(int sorte, int menge) {
	cout << "--- Getraenkeausgabe ---" <<endl;
	int i;
	for (i = 0; i < menge; i++) {
		cout << " Flasche " << i << "von " << menge << " der Sorte " << sorte << " wurde ausgegeben.",
			i + 1, menge, sorte;
	}
}





