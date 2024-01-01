#include <iostream>
#include <conio.h>
#include <cmath>
#define Epsilon 0.001

using namespace std;

double f(double x)
{
    return x * x - 49;
}

void bisection(double x1, double x2)
{
    int count=0;
    
    if (f(x1) * f(x2) >= 0)
    {
        cout << "The initial values haven't guess correctly, change the guess.\n";
        return;
    }

    double x0 = x1;
    while ((x2 - x1) >= Epsilon)
    {
        x0= (x1 + x2) / 2;
        if (f(x0) == 0.0)
            break;

        else if(f(x0)* f(x1) < 0)
        {
             x2 = x0;
            count++;
        }
        else
        {
            x1 = x0;
            count++;
        }
    }
    cout << "The value of root is : " << x0<<endl;
    cout << "The iteration is : " << count << endl;
}

int main()
{
    int count = 0;
    float x1, x2, x0;
    cout << "Enter the initial guess values for X1 and x2 \n";
    cin >> x1 >> x2;

    bisection(x1, x2);

    return 0;
    }
