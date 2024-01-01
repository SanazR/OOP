//Write a program that shows difference between static and auto var
#include <iostream>
using namespace std;

float calculate(float balance, float rate, int month){
    int i;
    float ben,sben = 0; //ben is interest of each month. sben is sum of interest of multiple months.
    for (i=0;i<month;i++){
        ben=balance*rate/100;
        balance += ben;
        sben += ben;
    }

    return sben;
}

int main(){
    int month;
    float balance,rate,sben;
    cout<<"Enter balance, rate and month:";
    cin>>balance>>rate >>month;

    sben = calculate(balance, rate, month);

    cout<<"\n benefit= "<<sben<<" ,balance= "<<balance;
    cout<<"\n New balance is: "<<(balance+sben);

    return 0;
}