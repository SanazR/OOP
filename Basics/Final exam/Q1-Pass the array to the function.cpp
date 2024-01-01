/*Pass the 10 element array to the function. In the function, code should find and print out the smallest and largest integer numbers and their indecies in array. 
Array also should be sorted in descending order.*/

#include <iostream>
using namespace std;

void max( int *arr, int size)
{
	//Finding the Largest Value in the Array
	int x, y, maxval, maxindice;
	
	for(x=0; x<size; x++)
	{
		for(y=x+1; y<size; y++)
		{
			if(*(arr+x) < *(arr + y)) {
				
				maxval = *(arr + y);
				maxindice = y;
			}
		}
	}
	
	//Printing out the Max Value
	cout << endl;
	cout << "Largest number in the Array is " << maxval << " at indice " << maxindice << endl;
}

void min( int *arr, int size)
{
	//Finding the Smallest Value in the Array
	int x, y, minval, minindice;
	
	for(x=0; x<size; x++)
	{
		for(y = x+1; y<size; y++)
		{
			if(*(arr+x) > *(arr+y)) {
				
				minval = *(arr+y);
				minindice = y;
			}
		}
	}
	cout << "Smallest number in the Array is " << minval << " at indice " << minindice << endl;	
}

void descsort( int *arr, int size)
{
	//Making a Descending Sort Function.
    int x, y, temp;
    
    for (x=0; x<size; x++)
    {
    	for(y=x+1; y<size; y++)
    	{
    		if(*(arr + y) > *(arr + x)) {
    			
    			temp = *(arr + x);
    			*(arr + x) = *(arr + y);
    			*(arr + y) = temp;
			}
		}
	}	
	
	//Printing out the Descending Sort Output
	cout << endl;
	cout << "Array Sorted into a Descending Order is as follows" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Sorted Array: ";
		for(x=0; x<size; x++)
	{
		cout << *(arr + x) << "  ";
	}
}

int main() {
	
	//Defining the size of the Array
	int n = 10;
	
	//Creating the array
	int num[n];
	
	//Getting User Input for the Array
	cout << "Enter the values for Elements of the Array Below" << endl;
	cout << "------------------------------------------------" << endl;
	cout << endl;
	
	for(int i=0; i<n; i++)
	{
		cout << "Set the Value for Element " << i << ": ";
		cin >> num[i];
	}
	
	//Printing the initial array for comparison purposes
	cout << endl;
	cout << "So the array made from these elements is as follows:" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << endl;
	
	cout << "Array Entered: ";
	for(int j=0; j<n; j++)
	{
		cout << num[j] << "  ";
	}
	
	//Getting the Largest and Smallest Values from the array.
	cout << endl;
	cout << "Max and Min Values from the Array are as follows:" << endl;
	cout << "-------------------------------------------------" << endl;
	
	max(num, n);
	min(num, n);
	
	//Sorting the array.
	descsort(num, n);
	cout << endl;
	cout << endl;
	
	return 0;
}
