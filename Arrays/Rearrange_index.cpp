#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];   //array given
	int ind[n];   //index array
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    cin>>ind[i];
	}
	for(int i=0;i<n;i++)
	{
	    ind[i]=a[ind[i]];  // array acc to index in ind array
	}
	for(int i=0;i<n;i++)
	 {
	     a[i]=ind[i];    //storing them in orgnl array 
	     ind[i]=i;       //reverting the index array acc to answer
	 }
	cout<<"Array: ";
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";    //Output
	}
	cout<<endl;
	cout<<"Index: ";
	for(int i=0;i<n;i++)
	{
	    cout<<ind[i]<<" ";    //output
	}
	
	return 0;
}
