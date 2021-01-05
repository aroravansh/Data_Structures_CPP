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
    int c=arr[0];        
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];    //shifting
    }
    arr[n-1] = c;     //for last element
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";      //Output
    }
	return 0;
}
