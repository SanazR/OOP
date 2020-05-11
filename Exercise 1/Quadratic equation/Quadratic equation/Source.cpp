/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	float x1, x2, Disc{}, a, b, c, x;

	cout << "Enter value for a,b and c:" << endl;
	cin >> a >> b >> c;

	if ( Disc > 0)
	{
		Disc = pow(b, 2) - 4 * a * c;
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
	}


	return 0;

}