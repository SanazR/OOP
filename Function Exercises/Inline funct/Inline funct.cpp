#include <iostream>
using namespace std;

inline int max(int a,int b){
    return a>b ? a:b;
}

int main(){
    cout<<"max of 10,20 is "<<max(10,20);
    cout<<"\n max of 99,22 is "<<max(99,22);

    return 0;
}