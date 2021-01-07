#include <iostream>
using namespace std;
/*
Given a square matrix, turn it by 90 degrees in clockwise direction without using any extra space
Input:
1 2 3 
4 5 6
7 8 9  
Output:
7 4 1 
8 5 2
9 6 3
*/
int main() {
	// your code goes here
	int n;
	cin>>n;    //size of array
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[i][j];      //input
	    }
	}
	int tmp;
	for(int i=0;i<n/2;i++)
	{
	    for(int j=i;j<n-1-i;j++)
	    {
	        tmp = arr[i][j];        //for swapping
	        arr[i][j] = arr[n-1-j][i];
            arr[n-1-j][i] = arr[n-1-i][n-1-j];     //rotating in group of 4
            arr[n-1-i][n-1-j] = arr[j][n-1-i];
            arr[j][n-1-i] = tmp;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        cout<<arr[i][j]<<" ";     //Output
	    }
	    cout<<endl;
	}
	return 0;
}
