#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class Num
{
    int num;
private:
    int id;

public:
    Num(int num, int id)
    {
        this->num = num;
        this->id = id;
    }
    void ascending(int array[])
    {
        sort(array, array + 5);
    }

    void get_value(int array[])
    {
        printf("Sorted Array:\n");
        for (int i = 0; i < 5; i++) {
            printf("%d\n", array[i]);
        }
    }
};
int main()
{
    int array[5] = { 8,5,2,6,1 };
    Num instance(1, 1);
    instance.ascending(array);
    instance.get_value(array);
    return 0;
};





