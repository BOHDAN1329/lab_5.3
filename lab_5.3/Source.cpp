// Лабораторна робота № 5.3
// < Паньків Богдан >
// Лабораторна робота № 5.3
/* Функції, що містять
розгалуження та цикли з рекурентними співвідношеннями*/
// Варіант 17

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double h(const double x);
int main()
{
	double gp, gk, z;
	int n;

	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;

	cout << fixed;

	cout << " _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	cout << "|" << setw(5) << "g" << "      |"
		<< setw(7) << "z" << "    |"
		<< endl;
	cout << " _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	double dg = (gk - gp) / n;

	double g = gp;

	while (g <= gk)
	{
		z = h(g * g + 1) + h(g + h(1)) + 1;
		cout << "|" << setw(7) << setprecision(2) << g << " |"
			<< "|" << setw(10) << setprecision(5) << z << " |"
			<< endl;
		g += dg;
	}

	return 0;
}

double h(const double x)
{
	if (abs(x) >= 1)
		return (sin(x) + 1) / (1 + cos(x));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
				double R = (x) / (2 * i * (2 * i - 1));
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}

}

