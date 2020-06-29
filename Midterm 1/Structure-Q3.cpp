#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct student
{
	string fname;
	string lname;
	int age;
};

int main()
{
	student A;
	student B;
	student C;
	cout << "Enter Firstname, Lastname and age of student A" << endl;
	cin >> A.fname >> A.lname >> A.age;
	cout << "Enter Firstname, Lastname and age of student B" << endl;
	cin >> B.fname >> B.lname >> B.age;
	cout << "Enter Firstname, Lastname and age of student C" << endl;
	cin >> C.fname >> C.lname >> C.age;

	cout << "Student A Personal Information is:" << A.fname <<"\t" <<A.lname <<"\t"<< A.age << endl;
	cout << "Student B Personal Information is:" << B.fname << "\t" << B.lname << "\t" << B.age << endl;
	cout << "Student C Personal Information is:" << C.fname << "\t" << C.lname << "\t" << C.age << endl;

	_getch();
	return 0;
}