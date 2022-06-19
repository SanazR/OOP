//Write a program to print digits of a number separately.

#include <iostream>
using namespace std;

void write_v(int x){
    if(x<10){
        cout<<x<<endl;
    }
    else{
        write_v(x/10);
        cout<<x%10<<endl;
    }
}

int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    write_v(x);

    return 0;
}