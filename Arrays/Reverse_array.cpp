#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;        //size of array
	cin>>n;
	int arr[n];    //array of size n
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];    //input
    }
    int j=n-1;     //acting as a pointer
    for(int i=0;i<n/2;i++)
    {
        int tmp = arr[i];
        arr[i] = arr[j];       //swapping elements using tmp variable
        arr[j--] = tmp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";   
    }
    
	return 0;
}
