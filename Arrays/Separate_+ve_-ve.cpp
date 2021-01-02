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
    int c=0;        
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            int temp = arr[i];
            arr[i] = arr[c];   //moving -ve to front
            arr[c++] = temp;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
    }
	return 0;
}
