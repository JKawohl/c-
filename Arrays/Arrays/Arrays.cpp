// Arrays.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{
	float noten[10], summe=0;
	int anzahl = 10, i = 0;

	
	for (i = 0, i < anzahl; i++;) {
		cout << "Bitte geben Sie eine Note ein: " << endl;
		cin >> noten[10];
	}
	
	// summe berechnen
	for (i=0;i<anzahl; i++) {
		summe += noten[i];
	
	}


	cout << " Die Summe lautete " << summe << endl;
	cout << "Der Durchnschnitt lautete: " << summe / anzahl << endl;
	getchar();
    return 0;
}

