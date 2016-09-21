// functionsplayground.v.2.0.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

float eingabe_zahl() {
	float eingabe;
	cout << "Bitte geben Sie eine Zahl ein" << endl;
	cin >> eingabe;
	return eingabe;
}

float multipliziere(float zahl1, float zahl2) {
	return(zahl1*zahl2);
}

void ausgabeErgebnis(float ergebnis) {
	cout << "Ergebnis: " << ergebnis << endl;
}

int main()
{
	float faktor1, faktor2, ergebnis;

	faktor1 = eingabe_zahl();
	faktor2 = eingabe_zahl();

	ergebnis = multipliziere(faktor1, faktor2);
	ausgabeErgebnis(ergebnis);

	getchar();
	getchar();

    return 0;
}

