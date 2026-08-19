
#include <iostream>
#include <Windows.h>
using namespace std;

string imie; int liczba;
int main()
{
	cout << "podaj imie ";
	cin >> imie;
	cout << "podaj dodatnia liczbe calkowita  ";
	cin >> liczba;


		for (int i = 1; i <= liczba; i++)
		{
			Sleep(10);
			cout << i << ". " << imie << endl;

		}
}