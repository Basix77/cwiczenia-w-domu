
/*
#include <iostream>
#include <Windows.h>
using namespace std;

int populacja = 1;
int godzin = 0;

int main()
{
	do
	{
		godzin++;
		populacja = populacja * 2;

		cout << "minelo godzin:" << godzin <<"     ";
		cout << "liczba bakterii: " << populacja << endl;
	} while (populacja <= 1000000000);

	return 0;
}*/

//while         najpierw WARUNEK potem INSTRUKCJE	- moze sie ani razu nie wykonac
//do while		1. INSTRUKCJE 2. WARUNEK			- wykona sie przynajmniej raz


#include <iostream>
#include <windows.h>

using namespace std;

//rozmnazaja sie po 2 co godzine
//po ktorej godzinie populacja przekroczy milion	

int populacja=1;
int godzin=0;

int main()
{
	while (populacja <= 1000000000) {
		 
		populacja = populacja * 2;
		godzin++;
		cout << "populacja jest rowna: " << populacja;
	
		
		cout << "         minelo godzin: " << godzin << endl;
		

	 } 
	return 0;
}





