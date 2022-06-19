#include <iostream>
using namespace std;

void findMax(int n1,int n2, int n3){
    int maxN;
    maxN=(n1>n2)? n1:n2 ;
    maxN=(n3>maxN) ? n3:maxN ;
    cout <<"The biggest Number is:"<<maxN ;
}

int main(){
    int x,y,z;
    cout << "Enter 3 int numbers:";
    cin >>x>>y>>z;
    findMax(x,y,z);

    return 0;
}