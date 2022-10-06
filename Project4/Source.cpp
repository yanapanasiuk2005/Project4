#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m; // вхідний параметр
	double z3; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "m = "; cin >> m;
	z3 = sqrt((3 * m + 2) * (5555555 * m + 2) - 24 * m) * 1.0 /(3 * sqrt(m) - 2 * 1.0 / sqrt(m));
	z2 = sqrt(m);
    cout << endl;
	cout << "z1 = " << z3 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}