#include <iostream>
#include <iomanip>
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

	cout << fixed << setprecision(2);
	suma = x + y;
	cout << "suma: " << suma << endl;
	roznica = x - y;
	cout << "roznica: " << roznica << endl;
	iloczyn = x * y;
	cout << "iloczyn: " << iloczyn << endl;
	if (y == 0) {
		cout << "dzielenie przez 0 jest nie mozliwe" << endl;
	}
	else {
		iloraz = x / y;
		cout << "iloraz: " << iloraz << endl;
	}

	return 0;
}

