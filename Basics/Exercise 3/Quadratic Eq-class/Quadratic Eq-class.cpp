#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class QuadraticEq
{
	float a, b, c, x1, x2, x, Disc;

public:
	float disc(float a, float b, float c, float x1, float x2, float x, float Disc)
	{

		cout << "Enter value for a,b and c:" << endl;
		cin >> a >> b >> c;

		Disc = pow(b, 2) - 4 * a * c;
		
	}

};

class calculation:public QuadraticEq
{

	float a, b, c, x1, x2, x, Disc;

public:
	float disc(float a, float b, float c, float x1, float x2, float x, float Disc)
	{
		cout << "Enter value for a,b and c:" << endl;
		cin >> a >> b >> c;

		Disc = pow(b, 2) - 4 * a * c;

		if (Disc > 0)
		{

			x1 = (-b + sqrt(Disc)) / (2 * a);
			x2 = (-b - sqrt(Disc)) / (2 * a);
			cout << "The equation has two roots" << endl << "x1 is:" << x1 << endl << "x2 is:" << x2 << endl;

		}

		else if (Disc == 0)
		{
			x = -b / (2 * a);
			cout << "The equation has one root:" << endl << "x is:" << x << endl;
		}

		else
		{
			cout << "The function has no real root" << endl;
			return 1;

		}

	}

};

int main()
{
	float a, b, c, x1, x2, x, Disc;
	calculation* R;
	R->disc(a, b, c, x1, x2, x, Disc);

	return 0;

}