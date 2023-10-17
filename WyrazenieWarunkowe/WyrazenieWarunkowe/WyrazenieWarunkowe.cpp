

#include <iostream>

using namespace std;
int main()
{
	/*
	int liczba = 1;
	//jeśli liczba==1 to napisz "to jest super liczba" w preciwnym układzie napisz liczba 
	liczba == 1 ? cout << "to jest super liczba" : cout << "liczba";
	*/
	
	
	
	//zamień liczbę na ocenę: 6 - celujacy, 5 - bdb, 4 - db, 3 - dst, 2 - dop, 1 -ndst
	//0 lub inna : nie ma takiej oceny 

	//ver 1 if else if
	
	int ocena;
	cout << "podaj liczbe jako ocena = "; cin >> ocena;
	/*
	if (ocena == 6) cout << "celujący" << endl;
	else if (ocena == 5) cout << "bdb" << endl;
	else if (ocena == 4) cout << "dv" << endl;
	else if (ocena == 3) cout << "dst" << endl;
	else if (ocena == 2) cout << "dop" << endl;
	else if (ocena == 1) cout << "ndst" << endl;
	else cout << "nie ma takiej oceny" << endl;
	*/

	//ver 2 wyr skr. warunek ? prawda: fałsz;
	ocena == 6 ? (cout << "celujący" << endl)
		: (ocena == 5 ? (cout << "bdb" << endl)
			: (ocena == 4 ? (cout << "db" << endl)
				: (ocena == 3 ? (cout << "dst" << endl)
					: (ocena == 2 ? (cout << "dop" << endl)
						: (ocena == 1 ? (cout << "ndst" << endl) : (cout << "nie ma takiej oceny" << endl))))));

	return 0;

}
