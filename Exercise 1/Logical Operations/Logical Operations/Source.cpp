#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;

int main()
{
    string T, F,ans1,ans2, op, And,OR;
    T = "true";
    F = "false";
    And = "and";
    OR = "or";

    cout << "Enter the bool values to compare:" << endl<<"Enter value 1:"<<endl;
    cin >> ans1;
    cout << "Enter value 2:" << endl;
    cin >> ans2;
    cout << "Enter the logical operation:" << endl;
    cin >> op;

    if (ans1 == ans2 )
    {
        cout << "The result is:"<<ans1 << endl;
    }
    
    if (ans1 != ans2 && op == And)
    {
        cout << "The result is false" << endl;
    }

    if (ans1 != ans2  && op == OR)
    {
        cout << "The result is true"  << endl;
    }

        return 0;
}