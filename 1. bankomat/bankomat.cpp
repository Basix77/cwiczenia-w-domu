#include <iostream>
#include <string>
using namespace std;

string PIN;

int main()
{
	cout << "Witaj w naszym banku" << endl;
	cout << "Podaj numer PIN: ";
	cin >> PIN;

	if (PIN == "1729")
	{
		cout << "Poprawny pin";
	}
	else 
	{
		cout << "Niepoprawny pin";
	}

	return 0;


}



