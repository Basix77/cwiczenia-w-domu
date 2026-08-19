#include <iostream>
#include <Windows.h>

using namespace std;

int wiek;
int main()

{
    //wiek 18
    //prezydent minimum 35

    
        cout << "podaj swoj wiek: " << endl;
    cin >> wiek;

    if (wiek < 18)
    {
        cout << "nie jestes pelnoletni" << endl;
    }
    else
    {
        cout << "jestes pelnoletni" << endl;
    }

    if (wiek >= 35)
    {
        cout << "mozesz zostac prezydentem" << endl;
    }
    else
    {
        cout << " nie mozesz zostac prezydentem" << endl;

    }
    return 0;
}