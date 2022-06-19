#include <iostream>
using namespace std;

unsigned fact(int x){
    if(x !=0){
        return (x*fact(x-1));
    }

    return 1;
}

int main(){
    int n;
    cout<<"Enter a value for n:";
    cin>>n;
    cout<<"\n Number= "<<n<<" ,Factorial= "<<fact(n);

    return 0;
}