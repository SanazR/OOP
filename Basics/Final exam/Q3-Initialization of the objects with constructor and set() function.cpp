/*Create class, which should have three private variables, first name, last name and age. Initialization of the class' private members 
should be possible using the constructor. Class also should have set() and get() methods for setting and getting the values for the private variables. 
Create 10 element array from the class objects. Initialization of the objects, whos index is less or equal to 4 should be done using the constructor,
while the elements of an array whos index is greater than 4, should be initialized using the set() function. After initialization of the array, the 
array should be passed to the function, which will sort the objects in ascending order of the age private variable.*/

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;
class People {
    private:
        string firstname;
        string lastname;
        int age;

        //Initiate private class with constructor
    public:
       People(string x=" ", string y=" ", int z= 0 )
        {
            firstname = x;
            lastname = y;
            age = z;
        }
        void setFirstname(string s){
            firstname = s;
        }
        void setLastname(string s){
            lastname = s;
        }
        void setAge(int temp){
            age = temp;
        }
        string getFirstname(){
            return firstname;
        }
        string getLastname(){
            return lastname;
        }
        int getAge(){
            return age;
        }

        //Sort ages in ascending order
        void sorter(People *arr){
            for(int i=1;i<=10;i++){
                for (int j = 1; j <= 9; j++)
                    if (arr[j].getAge() > arr[j+1].getAge())
                        swap(arr[j], arr[j+1]);
    }
        }
};
int main(){
    People arr[11];

    //Printing result with the test value
    string names[10] = {"test1","test2","test3","test4","test5","test6",
                        "test7","test8","test9","test10"};
    string surnames[10] = {"test1","test2","test3","test4","test5","test6",
            "test7","test8","test9","test10"};
    int ages[10] = {30,21,4,2,11,10,50,23,85,25};

    //Differentiate the test value 
    for(int i=1;i<=10;i++){

        //Values with index less than 4 must be initialize by constructor
        if(i<=4){
            arr[i] = {names[i-1],surnames[i-1],ages[i-1]};
        } else {
            arr[i].setFirstname(names[i-1]);
            arr[i].setLastname(surnames[i-1]);
            arr[i].setAge(ages[i-1]);
        }//Values with index more than 4 must be initialize by set function 
    }

    //Printing values based on ascending order of age 
    People inst;
    inst.sorter(arr);
    for(int i=1;i<=10;i++){
        cout<<arr[i].getFirstname()<<" "<<arr[i].getLastname()<<" "<<arr[i].getAge()<<endl;
    }
}