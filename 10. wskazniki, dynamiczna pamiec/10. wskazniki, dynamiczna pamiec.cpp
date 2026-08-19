

#include <iostream>
#include <cstdlib> //
#include <time.h>  // do mierzenia czasu clock_t, clock();

using namespace std;

void czasWskaznika() {
	int ile;
	clock_t start;
	clock_t stop;
	double czas;
	cout << "Ile liczb w tablicy: ";
	cin >> ile;

	int* tablica; //robimy nowy wskaznik ( jeszcze na nic nie wskazuje)
	tablica = new int[ile]; //rezerwujemy od momentu w pamieci gdzie jest wskaznik, nie adres tego na co wskaznik wskazuje

	start = clock();
	for (int i = 0; i < ile; i++) {
		tablica[i] = i;
		tablica[i] += 50;
	}
	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << "minelo(bez wskaznika): " << czas << endl;

	delete[] tablica; //usuwanie tych danych z pamieci




	tablica = new int[ile];
	int* wskaznik = tablica;
	//int* wskaznik = new int[ile];

	start = clock();

	for (int i = 0; i < ile; i++) {
		*wskaznik = i;
		*wskaznik += 50;
		wskaznik++;
	}

	stop = clock();
	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << "minelo(ze wskaznikiem): " << czas;

	delete[] tablica;
} 
//clocl_t, clock();, CLOCKS_PER_SEC 


//-------------------------------------------


float sredniaTab(float *tab, int ile) {

	float suma = 0;
	for (int i = 0; i < ile; i++) {
		suma += *tab;
		*tab = 999;
		tab++;

	}
	return suma / ile;
}

void MainSredniaTab() {
	float tablica[3];

	tablica[0] = 1.5;
	tablica[1] = 2.3;
	tablica[2] = 0.75;
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;


	cout << "srednia wynosi: " << sredniaTab(tablica, 3) << endl;
	cout << tablica[0] << endl;
	cout << tablica[1] << endl;
	cout << tablica[2] << endl;
}


//------------------------------------------------------------------------



float sredniaABC(float &a, float &b, float &c) {
	return (a + b + c) / 3;
}

void MainSredniaABC() {
	float a, b, c;

	a = 1.5;
	b = 2.3;
	c = 0.75;

	cout << "\nsrednia: " << sredniaABC(a, b, c);
}





int main()
{
	
}
