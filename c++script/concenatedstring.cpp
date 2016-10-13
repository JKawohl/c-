#include <iostream>
#include <string>

using namespace std;

int main()
{
	string message( " I Have learned something new again!\n"),
	prompt ("Please input two lines of Text:"),
	str1, str2,sum;

	cout << message << endl;
	cout << prompt << endl;

	getline (cin, str1);
	getline (cin, str2);

	sum = str1 + " + " + str2;
	cout  << sum << endl;
	return 0;

}
