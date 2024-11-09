#include <iostream>
using namespace std;


int main()
{
	int w;
	cout << "podaj liczbe wierszy trojkata Pascala" << endl;
	cin >> w;
	cout << endl;

	for(int i = 0; i < w; i++) {
		int poczatek = 1;
		for (int j = 0; j <= i; j++) {
			cout << poczatek << " ";
			poczatek = poczatek * (i - j) / (j + 1);
		}
		cout << endl;
	}

	return 0;
}

