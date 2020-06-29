#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

void Array(int num[], int size)
{
    cout << "Array's elements are: " << endl;
    int i;
    for (i = 0; i < size; ++i)
    {
        cout << num[i] << endl;
    }
}

int main() {

    int i = 0;
    int NUM[5] = { 0,2,4,6,8 };
    Array(NUM, sizeof(NUM) / sizeof(NUM[i]));

    _getch();
    return 0;
}