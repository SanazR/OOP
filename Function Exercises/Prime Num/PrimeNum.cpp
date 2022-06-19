#include <iostream>
using namespace std;

int prime(int num){
    int i, temp=1;
    for(i=2;(i<=num/2) && temp ; i++){
        if(num%i==0){
            temp=0;
        }
    }
    return temp;
}

int main(){
    int num;
    char ans;
    while(1){
        cout<<"Enter the num:";
        cin>>num;
        if(prime(num)){
            cout<<"\n The number "<<num<<" is prime.";
        }
        else{
            cout<< "\n The number "<<num<<" is not prime.";
        }
        cout<<"\n Do you want to continue: y/n";
        cin>>ans;

        if(ans!='y'){
            break;
        }
    }

    return 0;
}