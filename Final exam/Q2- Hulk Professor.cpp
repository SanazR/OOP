/*Create 10 element array of the elements of the type of structure professor. Pass this array to the function,
which should print out the first name and last name of the professor,who's sum of age and height is the biggest.*/

#include <iostream>
#include<algorithm>
using namespace std;


struct professor {
    string FirstName;
    string LastName;
    float Height;
    int Age;
};

struct professor arr[10];

//Calculating the Sum of height and age of each Professor and finging the highest sum
void maxSum(professor *arr){
    int sum = 0,ind;
    for (int i = 0; i < 10; i++){
        if(arr[i].Age+arr[i].Height > sum){
            sum = arr[i].Age+arr[i].Height;
            ind = i;
        }
    }

    //Printing the name and last name of the Professor with the highest sum
    cout<<"First Name: " <<arr[ind].FirstName<<endl
    <<"Last Name : " <<arr[ind].LastName<<endl;
}

//Geting structure value from user for each element of array (10 structure value should enter by user)
int main(){
    for(int i=0;i<10;i++){
        cout<<"Firstname : ";
        cin>>arr[i].FirstName;
        cout<<arr[i].FirstName<<endl;
        cout<<"Lastname : ";
        cin>>arr[i].LastName;
        cout<<arr[i].LastName<<endl;
        cout<<"Height : ";
        cin>>arr[i].Height;
        cout<<arr[i].Height<<endl;
        cout<<"Age : ";
        cin>>arr[i].Age;
        cout<<arr[i].Age<<endl;
        cout<<"------------------------"<<endl;
    }
    
    maxSum(arr);
    
}