#include <iostream>
#include <conio.h>
using namespace std;

int Sum(int x, int y)
{
	return x + y;
}

signed int Subtraction(int x, int y)
{
	return y - x;
}

int multiplication(int x, int y)
{
	return x * y;
}

double division(float x, float y)
{
	return y / x;
}

int main()
{
	int x, y;
	int a, b;
	signed int c;
	double d;
	cout << "Enter x and y" << endl;
	cin >> x>>y;

	a = Sum(x,y);
	b = Subtraction(x, y);
	c = multiplication(x, y);
	d = division(x, y);
	cout << "The Sum is:" << a << endl;
	cout << "The Remain is:" << b << endl;
	cout << "The product is:" << c << endl;
	cout << "The Quotient is:" << d << endl;

	_getch();
	return 0;
}