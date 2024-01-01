#include <iostream>

using namespace std;

void convert(void){
    int h, m ,s;
    long int time;

    cout<<"Enter the time:";
    cin>> h>>m>>s;
    time= (long int) (60*h+m)*60+s;
    cout<< "The time is:"<<time<<" seconds.";
}


int main()
{
    convert();  
    return 0;
}