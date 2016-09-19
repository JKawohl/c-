// ConsoleApplication1.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main()
{
	// die Temperatur in Celsius eingeben
	int celsius;
	cout << "Geben Sie die Temperatur in Celsius ein:" << endl;
	cin >> celsius;

	// Den Umrechnungsfaktor für Celsius in Fahrenheit berechnen
	int factor;
	factor = 212 - 32;

	//Mit dem Umrechnungsfaktor Grad Celsius ind Grad Fahrenheit umrechnen
	int fahrenheit;
	fahrenheit = factor * celsius / 100 + 32;
	//Ergebnis

	cout << "entspricht Grad Fahrenheit:";
	cout << fahrenheit << endl;
	//Warten bis der Benutzer den Wert gelesen und das Programm beendet hat
	cout << "Druecken sie Enter um fortzufahren ...." << endl;
	cin.ignore(10, '\n');
	cin.get();
    return 0;
}

