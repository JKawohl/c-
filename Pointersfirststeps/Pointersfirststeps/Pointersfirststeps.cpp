// Pointersfirststeps.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void addiere(int *summand1, int *summand2, int *summe) {
	*summe = *summand1 + *summand2;
}
int main()
{
	int zahl1 = 666666666;
	int zahl2 = 333333333;
	int summe;

	addiere(&zahl1, &zahl2, &summe);
	cout << "Summe von zahl1 und zahl2: " << summe << endl;
	
	getchar();
    return 0;
}

