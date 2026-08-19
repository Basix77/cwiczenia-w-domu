
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string imie;
int main()
{
    /*cout << "Podaj imie: ";
    cin >> imie;
  
    int dlugosc = imie.size();
    cout << dlugosc;

    if (imie[(imie.size()-1)] == 'a') {
        cout << "jestes kobieta";
    }
    else {
        cout << "jestes mezczyzna";
    }*/

    string wyraz;

    

    cout << "Podaj wyraz: ";
    cin >> wyraz;
    int dlugosc = wyraz.size();

    for (int i = (dlugosc - 1); i >= 0; i--) {
        cout << wyraz[i];
    }

    transform(wyraz.begin(), wyraz.end(), wyraz.begin(), ::toupper);
    cout << wyraz;

    string szukaj = "Ala";

}





