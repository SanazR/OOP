#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Student
{
	int age;
	string fname;
	string lname;

public:
	void set_stud(int a, string f, string l)
	{
		age=a;
		fname = f;
		lname = l;
	}

	void get_info()
	{
		cout << "age: " << age << endl;
		cout << "firstname: " << fname << endl;
		cout << "lastname: " << lname << endl;

	}
};

int main()
{
	Student stud1, stud2, stud3;
	stud1.set_stud(18, "Sara", "Gorden");
	stud2.set_stud(19, "Mike", "Dennis");
	stud3.set_stud(18, "Micheal", "Monic");

	cout << "Student 1 is:" << endl;
	stud1.get_info();
	cout << "\nStudent 2 is:" << endl;
	stud2.get_info();
	cout << "\nStudent 3 is:" << endl;
	stud3.get_info();

	_getch();
	return 0;
}