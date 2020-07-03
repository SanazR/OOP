#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Time
{
	
	int hour;
	int minute;
	int second;
	string weekday="Friday";

public:
	Time (int h, int min, int sec)
	{
		hour = h;
		minute = min;
		second = sec;
	}

	void get_time()
	{
		cout << "The time is: " << weekday << "\t" << hour << ":" << minute << ":" << second << endl;
	}
	
};

int main()
{
	Time t1(12, 05, 45), t2(05, 17, 10);
	t1.get_time();
	t2.get_time();

	return 0;
}