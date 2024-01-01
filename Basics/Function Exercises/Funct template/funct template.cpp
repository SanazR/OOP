#include <iostream>
using namespace std;

template <class T>
T maximum(T p1,T p2,T p3){
    T max;
    max=p1>p2 ? p1:p2;
    max=p3<max? max:p3;

    return max;

}

int main(){
    char c1,c2,c3;
    int n1,n2,n3;
    double d1,d2,d3;
    
    cout<<"Enter 3 char: ";
    cin>>c1>>c2>>c3;
    cout<<"\nThe max char value is: "<< maximum(c1,c2,c3);

    cout<<"\nEnter 3 int: ";
    cin>>n1>>n2>>n3;
    cout<<"\nThe max int value is: "<< maximum(n1,n2,n3);

    cout<<"\nEnter 3 double: ";
    cin>>d1>>d2>>d3;
    cout<<"\nThe max double value is: "<< maximum(d1,d2,d3);

    return 0;
}