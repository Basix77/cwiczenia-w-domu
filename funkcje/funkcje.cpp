

#include <iostream>
using namespace std;

float metry; //metry to zmienna globalna

float ile_cali(float m) {              //m to ARGUMENT formalny (nie jest widoczny dla programu glownego)
    //float cale = m * 39.37;  //cale to zmienna lokalna (od ilecali)

    return m * 39.37;
}

float ile_jardow(float j); //daje znac proramowi, ze bedzie taka funkcja, a funkcje pisze pod mainem zey nie zasmiecac kodu

//.h headers - naglowki, funkcje mozna zapisac w bibliotece

//procedura to funkcja, ktora nic nie zwraca np animacja smierci w mario (jest wywolywana wiele razy)
void ile_mil(float m)
{
    cout << "na mile : " << m * 0006213;
}


int main()
{
    //float meters // to zmienna lokalna (od main)
    cout << "podaj ile metrow\n";
    cin >> metry;
    cout << "na cale: " << ile_cali(metry) << endl;    //metry to ARGUMENT aktualny, jest widoczny w main
    cout << "na jardy: " << ile_jardow(metry) << endl;
    ile_mil(metry);

}
//ile_cali(metry) wywolujac funkcje w ten sposob wywolujemy WARTOŒÆ, czyli oryginal z metry nie zmiania sie, a funkcja m uzywa kopi metry


    float ile_jardow(float j) {
        return j * 1.093;
    }