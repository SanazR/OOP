
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int count = 0;
	cout << "Type a statement and press Enter to end:\n ";
	while (cin.get() != '\n')
		count++;
	cout << "\nThe length of statement is: " << count;
	_getch();
	return 0;
}