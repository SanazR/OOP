#include <iostream>
#include <conio.h>
using namespace std;

void Swapnums(int* a,int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main()
{
	int num1, num2;
	cout << "Enter initial value for num1 and num2" << endl;
	cin >> num1 >> num2;
	cout << "a=" << num1 << "\nb=" << num2 << endl;
	Swapnums(&num1, &num2);
	cout << "a=" << num1 << "\nb=" << num2 << endl;

	_getch();
	return 0;
}