#include <iostream>
using namespace std;


int main()
{
	float x;
	float y;
	cout << "Podaj liczbe x" << endl;
	cin >> x;
	cout << "Podaj liczbe y" << endl;
	cin >> y;
	double suma;
	double roznica;
	double iloczyn;
	double iloraz;
	suma = x + y;
	roznica = x - y;
	iloczyn = x * y;
	iloraz = x / y;
	cout << "suma: " << suma << endl;
	cout << "roznica: " << roznica << endl;
	cout << "iloczyn: " << iloczyn << endl;
	cout << "iloraz: " << iloraz << endl;

	return 0;
}

