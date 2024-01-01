//Write a program which uses global andlocal variables and have local and global variableswith the same name too.
#include <iostream>
using namespace std;

int x;

void funct1(){
    cout<<"\n in funct 1 x is "<<x;
}

void funct2(){
    int x;
    cout<<"\n In funct2 x values changes to "<<x;
    for(x=1;x<6;x++){
        cout<<"\n x= "<<x;
    }
    cout<<"\n Globa x in funct2 is "<< ::x;
}

int main(){
    x=100;
    funct1();
    funct2();

    cout<< "\n in main funct, the value of x is "<<x;

    return 0;
}