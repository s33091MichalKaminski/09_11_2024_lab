#include <iostream>
using namespace std;


int main()
{
	char znak;
	cout << "podaj znak dowolny (\"t\" - zakonczy dzialanie programu)" << endl;
	do {
		cin >> znak;
		cout << "wpisales znak: " << znak << endl;
	} while (znak != 't');
	cout << "koniec programu znak \"t\" zakonczyl program" << endl;
	return 0;
}

