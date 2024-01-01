#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
	char ch;
	clearerr;
	for (i = 33; i <= 120; i++)
	{
		ch = i;
		cout << i << "=" << " " << ch << " ";
		if (i % 5 == 0)
			cout << "\n";
	}//end of for

	return 0;
}

