#include <iostream>
#include <windows.h> //do funkcji sleep

using namespace std;


int main()
{
	for (int i = 5; i >= 0; i--)
	{
		Sleep(1000);  //opoznia wygenerowanie kolejnej linijki o sekunde (opoznia wykonanie kolejnej petli)
		system("cls"); //czysci ekran
		cout << i << endl;

	}
	Sleep(1000);
	system("cls");
	cout << "JEBUT!";
}