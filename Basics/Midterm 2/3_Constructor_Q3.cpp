#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
using namespace std;

class Time
{

	int hour;
	int minute;
	int second;
	string weekday = "Monday";

public:
	Time()
	{
		hour = 00;
		minute = 00;
		second = 00;
	}

	Time(int min, string day)
	{
		hour = 00;
		minute = min;
		second = 00;
		weekday = day;
	}

	Time(int h, int min, int sec)
	{
		hour = h;
		minute = min;
		second = sec;
	}

	void get_time()
	{
		cout << "The time is: " << weekday << "\t" << setw(2) << setfill('0')<<  hour << ":" << setw(2) << setfill('0')<< minute << ":" << setw(2) << setfill('0')<< second << endl;
	}

};

int main()
{
	Time t1, t2(17,"Saturday"),t3(20,07,22);
	t1.get_time();
	t2.get_time();
	t3.get_time();

	return 0;
}