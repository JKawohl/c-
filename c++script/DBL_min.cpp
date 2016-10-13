//Datentypenmax.cpp
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main ()

{
cout << "Die Minimale groesse für DBL_MIN betraegt: " << DBL_MIN << endl;
cout  << "Die Maximale groesse für CHAR_MAX betraegt: "  << DBL_MAX << endl;
cout << "Die genauigkeit von einem Double betraegt: " << DBL_DIG << endl;
cout << "Speicherbedarf :" << sizeof(double) << endl;

return 0;
}