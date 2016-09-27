// Schachbrett.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include "stdafx.h"
#include <iostream>

using namespace std;

int brett[8][8] = { 0 };

int main()
{
	int brett[8][8] = { 0 };

	brett[2][1] = 1;
	brett[4][2] = 2;
	brett[3][5] = 3;
	brett[6][7] = 4;

	int i, j;

	// Schleife fuer Zeilen, Y-Achse
	for (i = 0; i<8; i++) {
		// Schleife fuer Spalten, X-Achse
		for (j = 0; j<8; j++) {
			cout << brett[i][j] << "  ";
		}
		//Zeilenumbruch um Tabelle zu erstellen.
		cout << "\n";
	}
	getchar();
	getchar();

	return 0;
}