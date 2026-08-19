//quiz
 /*
 zadaje 5 pytan odczytanych z pliku a) b) c) d)
 sprawdzi poprawnosc odpowiedzi
 wyswietli wynik punktowy
 if, petle, switch, tablice, odczyt z pliku

*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <algorithm> // 

using namespace std;

string tresc[5];
string temat, nick;
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty=0;


//void menu() {
//	cout << "==================== QUIZ ==================== \n";
//	cout << "wybierz temat: " << endl;
//	cout << "temat 1" << endl;
//	cout << "temat 2" << endl;
//	cout << "temat 3" << endl;
//	cout << "temat 4" << endl;
//	cout << "temat 5" << endl;
//	cin >> temat;
//	switch (temat) {
//	case 1: {
//		temat1();
//		break;
//	}
//	case 2: {
//	}
//	case 3: {
//	}
//	case 4: {
//	}
//	case 5: {
//	}
//
//	}
//}

void temat1() {

}


int main()
{
	int nr_linii = 1;
	int nr_pytania = 0;
	string linia;
	fstream plik;
	plik.open("quiz.txt", ios::in);

	if (plik.good()==false) {
		cout << "Ten plik nie istnieje!" << endl;
		exit(0);
	}

	while (getline(plik, linia))
	{
		switch (nr_linii) {
		case 1: temat =	linia;			break;
		case 2: nick = linia;			break;
		case 3: tresc[nr_pytania] = linia;		break;
		case 4: odpA[nr_pytania] = linia;		break;
		case 5: odpB[nr_pytania] = linia;		break;
		case 6: odpC[nr_pytania] = linia;		break;
		case 7: odpD[nr_pytania] = linia;		break;
		case 8: poprawna[nr_pytania] = linia;	break;
		}
		if (nr_linii == 8) {
			nr_linii = 2;
			nr_pytania++;
		}
		nr_linii++;
	}

	/*petla 5 razy zada pytanie, 
	poczeka na odpowiedz, 
	sprawdzi poprawnosc,
	przyzna punkt lub nie

	*/

	for (int i = 0; i < +4; i++) {
		cout << endl << tresc[i] << endl;
		cout << "A. " << odpA[i] << endl;
		cout << "B. " << odpB[i] << endl;
		cout << "C. " << odpC[i] << endl;
		cout << "D. " << odpD[i] << endl;

		cout << "Twoja odpowiedz: ";
		cin >> odpowiedz;

		transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);                                    //zeby odpowiedzi z capslock tez dzialaly
		if (odpowiedz == poprawna[i]) {
			cout << "Dobrze! Zdobywasz punkt." << endl;
			punkty++;
		}
		else {
			cout << "Zle :( Nie dostajesz punktu. Poprawna odpowiedz: " << poprawna[i] << endl;
		}
	}
	cout << "Koniec quizu!" << endl << "Twoj wynik: " << endl << punkty << "/5";
	
	return 0;
}

