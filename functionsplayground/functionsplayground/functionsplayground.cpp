// functionsplayground.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

#include<stdio.h>
#include <iostream>

using namespace std;

char abc(int nummer) {
    return (64 + nummer);
}

int main() {
	cout << " 1. Alphabet-Buchstabe:" << abc(1) << endl;
	cout << "12. Alphabet-Buchstabe:" << abc(12) << endl;;
	cout <<"24. Alphabet-Buchstabe:" <<  abc(24) << endl;
	getchar();
	getchar();
	return 0;
}