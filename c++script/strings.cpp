// To use strings.
#include <iostream>
#include <string>
using namespace std;
// Declaration of cin, cout
// Declaration of class string
int main()
{
// Defines four strings:
string prompt("What is your name: "),

name, 
line( 40, '-'),
total = "Hello ";
 // An empty
 // string with 40 '-'
 // is possible!
cout << prompt;
getline( cin, name);
// Request for input.
// Inputs a name in one line
total = total + name;
// Concatenates and
// assigns strings.

cout << line << endl
 // Outputs line and name
<< total << endl;
cout << " Your name is " << name.length() << " characters long!" << endl;
cout << line << endl;
return 0;
}