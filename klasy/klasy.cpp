#include <iostream>
using namespace std;

class zwierze {
public:
	//atrybuty
	string gatunek;
	string imie;
	int wiek;

	//konstruktor
	zwierze(string g, string i, int w) {
		gatunek = g;
		imie = i;
		wiek = w;
		//	cout << "gatunek: " << g << "\nimie: " << i << "\nwiek: " << w;
	}
	//metoda
	void dodaj_zwierze() {
		//cout << "gatunek: " << gatunek << "\nimie: " << imie << "\nwiek: " << wiek << endl << endl;
		cout << "=====DODAWANIE NOWEGO ZWIERZECIA DO BAZY=====\n";
		cout << "Gatunek: "; cin >> gatunek;
		cout << "Imie: "; cin >> imie;
		cout << "Wiek: "; cin >> wiek;
		cout << "\n\n";

	}

	void daj_glos() {
		if (gatunek == "kot") {
			cout << imie << " lat " << wiek << ": Miau!" << endl;
		}
		else if (gatunek == "krowa") {
			cout << imie << " lat" << wiek << ": Muuuuuu!" << endl;
		}
		else if (gatunek == "koza") {
			cout << imie << " lat" << wiek << ": Meeeee!" << endl;
		}
		else {
			cout << "nieznany gatunek" << endl;
		}
	}
};


int main() {
	string a, b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	zwierze z1(a,b,c);
	//z1.dodaj_zwierze();
	z1.daj_glos();
		
}