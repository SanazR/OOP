#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int i, j;
    int num[10];
    cout << "Enter the elements and press enter after each element:" << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> num[i];
    }

    sort(num, num + 10);

    for (int j = 0; j < 10; j++)
        cout << num[j] << " ";

    _getch;
    return 0;
}