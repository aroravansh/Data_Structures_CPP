#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int m;        //size of array 1
	int n;        //size of array2
	cin>>m;
	cin>>n;
	int arr1[m];    //array of size m
	int arr2[n];    //array of size n
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];    //input array 2
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];    //input array 2 
    }
    int i = 0, j = 0; 
    cout<<"Union: ";
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
    // Print remaining elements of the larger array 
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 
    cout<<endl;
    int flag=0;
    i=j=0;
    cout<<"Intersection: ";
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            cout << arr2[j] << " "; 
            i++; 
            j++; 
            flag=1;
        } 
    } 
    if(flag==0)
    {
        cout<<"NULL";
    }
    return 0;
}
