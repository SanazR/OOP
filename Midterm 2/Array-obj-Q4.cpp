#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;

class Num
{
	int num1, num2 = 7;


public:
	Num(int m)
	{
		num1 = m;
	}

	void get_value()
	{
		cout << "The value of elements are: " << num1 << "\t" << num2 << endl;
	}
};

int main()
{
	Num array[5] = { 5,10,15,20,25 };
	int i;


	for (int i = 0; i < 5; i++)
	{
		array[i].get_value();
	}


	return 0;

}