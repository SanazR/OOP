
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num, digit,done=1;
	char ans='y';
	clearerr;
	while (done) {
		cout << "\nEnter a number:";
		cin >> num;
		cout << "Inverse:";
		do {
			digit = num % 10;
			cout << digit;
			num /= 10;
		} while (num != 0);
		cout << "\nDo you want to continue? [y/n]:";
		cin >> ans; 
		if (ans == 'n')
			done = 0;
		continue;

	}
	return 0;
}