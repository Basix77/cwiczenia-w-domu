
#include <iostream>
#include <cstdlib>
#include<time.h> //pobiera czas uplyniety od 1 stycznia 1970
#include <stdio.h>
using namespace std;

int liczba, zgadywana, ileprob=0;
int main()
{
  cout << "pomyslalem sobie o losowej liczbie z przedzialu 0...100" << endl;
  srand(time(NULL));
  liczba = rand() % 100+1;

  while (zgadywana != liczba) 
  {
	  ileprob++;

	  cout << "Zgadnij jaka (to Twoja " << ileprob << " proba):" << endl;
	  cin >> zgadywana;

	  if (zgadywana == liczba)
	  {
		  cout << "ZGADLES! wygrywasz w " << ileprob << " probie" << endl;
		  
	  }

	  if (zgadywana < liczba)
	  {
		  cout << "To za malo" << endl;
	  }

	  if (zgadywana > liczba)
	  {
		  cout << "To za duzo" << endl;
	  }

	  
	 
  }
 getchar();getchar();

  return 0;
 /*while ()
 { 
	 cout << "zgadnij jaka: ";
	 cin >> zgadywana; */

}

