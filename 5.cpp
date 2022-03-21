#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
	double e = 2.718;
	return 1/(pow(x,2)+x);
}
int main()
{
	//Метод средних прямоугольников
	double a = 1, b = 3, n = 1000, I = 0, n = 1000, h = (b - a) / n;
	for (double i = a; i <= b - h; i += h)
	{
		I += f(i + h / 2);
	}
	I *= h;
	cout << "Значение через метод средних прямоугольников "<< I << endl;

	//Метод трапеций
	a = 1;
	b = 3;
	n = 1000;
	I = 0;
	for (double i = a; i <= b; i += h)
	{
		if (i == a || i == b)
		{
			I += (f(i) / 2);
		}
		else
		{
			I += f(i);
		}
	}
	I *= h;
	cout << "Значение через метод трапеций " << I << endl;

	//Метод парабол
	a = 1;
	b = 3;
	n = 1000;
	I = 0;
	int nomer = 0;
	for (double i = a; i <= b; i += h)
	{
		if (i == a || i == b)
		{
			I += f(i);
		}
		else
		{
			if (nomer % 2 == 1)
			{
				I += 4 * f(i);
			}
			else I += 2 * f(i);
		}
		nomer++;
	}
	I *= (h / 3);
	cout << "Значение через метод парабол " << I << endl;
}