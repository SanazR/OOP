#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
using namespace std;

class Shoeshop {
	int size;
	string style;
	string color;
	bool gender;

public:
	void set_shoe(int n, string s, string c, bool g)
	{
		size = n;
		style = s;
		color = c;
		gender = g;

	}

	void get_info()
	{
		cout << "size:" << size << " ,style:" << style << " ,color:" << color;
		if (gender == 1)
			cout << " ,gender:Male"<<endl;
		else
			cout << " ,gender:Female"<<endl;

	}
};

int main()
{
	vector <Shoeshop> shoes(6);
	shoes[0].set_shoe(38, "classic", "black", 0);
	shoes[1].set_shoe(37, "print", "pink", 0);
	shoes[2].set_shoe(41, "classic", "black", 1);
	shoes[3].set_shoe(36, "sport", "white", 0);
	shoes[4].set_shoe(40, "sport", "blue", 1);
	shoes[5].set_shoe(42, "print", "gray", 1);

	shoes[0].get_info();
	shoes[1].get_info();
	shoes[2].get_info();
	shoes[3].get_info();
	shoes[4].get_info();
	shoes[5].get_info();

	return 0;
}
