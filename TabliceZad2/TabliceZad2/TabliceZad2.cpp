#include <iostream>

using namespace std;

int main()
{
	int tablica[] = { 10,20,30,3,34,3,4,34,3,4,3,4,3,4,4,3,53,6,64,5,62,25,6,2,56,7};
	int rozmiarTablicy = sizeof(tablica) / sizeof(int);
	cout << rozmiarTablicy;
	
	for (int i = 0; i < rozmiarTablicy; i++) {
		cout << tablica[i] << endl;
	}
	cout << "--------------------------------------------" << endl;

	for (int i = rozmiarTablicy - 1; i >= 0; i--) {
		cout << tablica[i] << endl;
	}
}
