#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class student
{
	int age;
	string fName, lName, field;

public:


	student()
	{
		age = 20;
		fName = "Sara";
		lName = "Geller";
		field = "Medicine";
	}

	student(string s)
	{
		age = 19;
		fName = "Mike";
		lName = "Johnson";
		field = s;
	}

	student(int a, string s)
	{
		age = a;
		fName = "George";
		lName = "Jackson";
		field = s;
	}



	void get_value()
	{
		cout << "age:" << age << endl;
		cout << "First name:" << fName << endl;
		cout << "Last name:" << lName << endl;
	}
};

int main()
{

	int A, a;
	string S, s;
	cout << "Enter age and Field of the student. Type 0 if you don't know the age and type 'none' if you don't know the field." << endl;
	cin >> A >> S;
	student st1, st2(s = S), st3(a = A, s = S);


	if (A == 0 && S == "none")
	{
		st1.get_value();
	}
	else if (A == 0 && S != "none")
	{
		cout << "There is one new student in this field" << endl;
	}
	else
	{
		return 1;
	}

	return 0;
}

