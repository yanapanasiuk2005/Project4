#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double m; // ������� ��������
	double z3; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "m = "; cin >> m;
	z3 = sqrt((3 * m + 2) * (5555555 * m + 2) - 24 * m) * 1.0 /(3 * sqrt(m) - 2 * 1.0 / sqrt(m));
	z2 = sqrt(m);
    cout << endl;
	cout << "z1 = " << z3 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}