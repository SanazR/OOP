#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double f(double x) 
{
    return pow(x,2)-49;
}

int main() {
    int count=0;
    double x1,x2,xm,x;
    double E=0.001;

    cout << "Enter beginning of interval: ";
    cin >> x1;
    cout << "Enter end of interval: ";
    cin >> x2;
   
    do {
        
        x = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));

        x1 = x2;
        x2 = x;

        count++;
               
        if (x == 0)
            break;
        xm = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        cout << xm << endl;
    } while (fabs(xm - x) > E); 

    cout << "\nRoot of the function is=" << xm << endl;
    cout << "No. of iterations = " << count << endl;

 

    _getch();
    return 0;
}