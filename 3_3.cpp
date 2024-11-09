#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout << "postac rownania kwadratowego to: ax^2+bx+c" << endl;
	float a, b, c;
	cout << "podaj liczbe a" << endl;
	cin >> a;
	cout << "podaj liczbe b" << endl;
	cin >> b;
	cout << "podaj liczbe c" << endl;
	cin >> c;
	cout << "postac rownania kwadratowego z uwzglednieniem wpisanych liczb to: "<<a<<"x^2+"<<b<<"x+"<<c << endl;
	float delta;
	delta = b * b - 4 * c * a;
	if (delta > 0) {
		//dwa rozwiazania
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);

		cout << "rownanie ma dwa pierwiastki x1= "<<x1<<" x2= "<<x2<< endl;

	}
	else if (delta == 0) {
		//jedno rozwiazanie
		float x = -b / (2 * a);

		cout << "rownanie ma jeden pierwiastek x= " << x<< endl;

	}
	else {
		cout << "rownanie nie ma pierwiastkow" << endl;
	}

	return 0;
}


