//Calculate product of 2 numbers by addition.

#include <iostream>
using namespace std;

int product(int x,int y){
    if(y==1){
        return x;
    }

    return(x+ product(x,y-1));
}

int main(){
    int x,y;
    cout<<"enter x and y: ";
    cin>>x>>y;
    cout<<"The product of x and y is: "<<product(x,y);

    return 0;
}

