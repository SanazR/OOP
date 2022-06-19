#include <iostream>
using namespace std;

float square(float n){
    cout<<"int the float funct: ";
    return n*n;
}

int square(int m){
    cout<<"int the int funct: ";
    return m*m;
}

int main(){
    int x=10;
    float y=2.5;

    cout<<"Square x: "<<square(x);
    cout<<"\nSquare y: "<<square(y);

    return 0;

}
