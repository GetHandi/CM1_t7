// 4 вариант;
// Решение нелинейных уравнений комбинированным методом (хорд и касательных);

#include <iostream>
#include <cmath>

using namespace std;

double fxa(double x)
{
	return x + pow(2, x) + 5;
}

double fxb(double x)
{
	return 3 * pow(x, 3) + pow(x, 2) + 2 * x + 3;
}

double dfxa(double x)
{
	return log(2) * pow(2, x) + 1;
}

double dfxb(double x)
{
	return 9 * x * x + 2 * x + 2;
}

double ddfxa(double x)
{
	return log(2) * log(2) * pow(2, x);
}

double ddfxb(double x)
{
	return 18 * 2 + 2;
}

//double a = -6.0; // крайнее левое значение промежутка  (a: -6;-4; b: -1;0)
//double b = -4.0; // крайнее правое значение промежутка;
double a = -1.0; // крайнее левое значение промежутка  (a: -6;-4; b: -1;0)
double b = -0.0; // крайнее правое значение промежутка;
double c = 0.0; // ответ;
const double eps = 0.000001; // отклонение; 
double temp = 0.0; // временная переменная;
double tangent = 0.0; //

int main()
{
	/*
    cout << "x + 2^x + 5 = 0" << endl << endl;

	int n = 0;
	c = (a * fxa(b) - b * fxa(a)) / (fxa(b) - fxa(a));
	if (fxa(a) * ddfxa(a) > 0)
		temp = a;
	else if (fxa(b) * ddfxa(b) > 0)
		temp = b;
	tangent = temp - fxa(temp) / dfxa(temp);
	cout << "Iteration #" << n << ":\t" <<
		"a = " << a << ",\t" <<
		"b = " << b << "\t" <<
		"answer - " << c << "\t" <<
		"tangent = " << tangent << "\t" <<
		"middle = " << (a + b) / 2 << "\n";
	while (b - a >= 2 * eps) {
		if (c < tangent) {
			a = c;
			b = tangent;
		}
		else {
			a = tangent;
			b = c;
		}
		c = (a * fxa(b) - b * fxa(a)) / (fxa(b) - fxa(a));
		if (fxa(a) * ddfxa(a) > 0)
			temp = a;
		else if (fxa(b) * ddfxa(b) > 0)
			temp = b;
		tangent = temp - fxa(temp) / dfxa(temp);
		n++;
		cout << "Iteration #" << n << ":\t" <<
			"a = " << a << ",\t" <<
			"b = " << b << "\t" <<
			"answer - " << c << "\t" <<
			"tangent = " << tangent << "\t" <<
			"middle = " << (a + b) / 2 << "\n";
	}
	return (a + b) / 2;*/


	cout << "3x^3 + x^2 + 2x + 3 = 0" << endl << endl;
	int n = 0;
	c = (a * fxb(b) - b * fxb(a)) / (fxb(b) - fxb(a));
	if (fxb(a) * ddfxb(a) > 0)
		temp = a;
	else if (fxb(b) * ddfxb(b) > 0)
		temp = b;
	tangent = temp - fxb(temp) / dfxb(temp);
	cout << "Iteration #" << n << ":\t" <<
		"a = " << a << ",\t" <<
		"b = " << b << "\t" <<
		"answer - " << c << "\t" <<
		"tangent = " << tangent << "\t" <<
		"middle = " << (a + b) / 2 << "\n";
	while (b - a >= 2 * eps) {
		if (c < tangent) {
			a = c;
			b = tangent;
		}
		else {
			a = tangent;
			b = c;
		}
		c = (a * fxb(b) - b * fxb(a)) / (fxb(b) - fxb(a));
		if (fxb(a) * ddfxb(a) > 0)
			temp = a;
		else if (fxb(b) * ddfxb(b) > 0)
			temp = b;
		tangent = temp - fxb(temp) / dfxb(temp);
		n++;
		cout << "Iteration #" << n << ":\t" <<
			"a = " << a << ",\t" <<
			"b = " << b << "\t" <<
			"answer - " << c << "\t" <<
			"tangent = " << tangent << "\t" <<
			"middle = " << (a + b) / 2 << "\n";
	}
	return (a + b) / 2;
}