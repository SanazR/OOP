#include <iostream>
using namespace std;

int volumeCube(int l,int w=25, int h=1){
    return (l*w*h);
}

int main(){
    int volume, l=100, w=50, h=2;

    volume=volumeCube(l,w,h);
    cout<<"First vol equals to "<<volume;

    volume=volumeCube(l,w);
    cout<<"\nSecond vol equals to "<<volume;

    volume=volumeCube(l);
    cout<<"\nThird vol equals to "<<volume;

    return 0;

}