//Write the funct that shows changes in parameters don't effect aruments
#include <iostream>
using namespace std;

void f1(int x, int y){
    cout<<"\n f1 recieves: x="<<x<<" ,y="<<y;

    x++;
    y++;

    cout<<"\n New f1: x="<<x<<", y="<<y;
}

int main(){
    int x,y;
    cout<<"Enter value for x and y:";
    cin>>x>>y;
    cout<<"\n You entered: x="<<x<<" ,y="<<y;

    f1(x,y);
    cout<<"\n After returning from f1: x="<<x<<" ,y="<<y;

    return 0;
}