
#include <iostream>
using namespace std;


float oceny[5]; float suma, srednia;
int main()
{
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nPodaj " << i+1 << "ocene: ";
        cin >> oceny[i];
        suma = suma + oceny[i];


    }
 
    srednia = suma / 5;

    cout << "srednia twoich ocen jest rowna: " << srednia;

}

