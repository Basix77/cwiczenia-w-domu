
#include <time.h>
#include <iostream>
#include <windows.h>
using namespace std;

int i;
int ktoraliczba = 0;
int liczba;
int zgadywana;
int main()


{


  cout << "Witaj w losowaniu! za 3 sekundy blokada maszyny losujacej zostanie zwolniona" << endl;
  cout << "3..." << endl;
	Sleep(1000);
	cout << "2..." << endl;
	  Sleep(1000);
	  cout << "1..." << endl;
	  Sleep(1000);
  srand(time(NULL));

  for (i = 1;i <= 6;i++) {
	  ktoraliczba++;
	  liczba = rand() % 49 + 1;
	  cout <<"  " << ktoraliczba << ". " << liczba << "\a" << endl;
	  Sleep(1000);
  }
  return 0;
}

