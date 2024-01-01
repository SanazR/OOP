//This program calculate perime and area of rectangle and print it in column 20 and row 10
// to the console

#include <iostream>
#include <conio.h>
#include <Windows.h>
using std::cin;
using std::cout;

int main()
{
	int length, width, s, p;
	clearerr;
	cout << "Enter length , width:";
	cin >> length >> width;
	s = length * width;
	p = (length + width)*2;
	BOOL WINAPI SetConsoleCursorPosition(
		_In_ HANDLE hConsoleOutput,
		_In_ COORD  dwCursorPosition
	);
	int gotoxy(int x, int y);
	COORD c = { 20, 10 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	cout << "S=" << s << " P=" << p;
	return 0;
}
