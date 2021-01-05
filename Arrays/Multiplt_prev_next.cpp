#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];   //array given
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];       //input
	}
    int k; int tmp;
	for(int i=0;i<n;i++)
	{
	    if(i==0){
	        k = a[0];
	        a[i]=a[i]*a[i+1];   //exception first element
	    }
	    else if(i==n-1)
	    {
	        a[i]*=k;     //exception last element
	    }
	    else
	    {
	        tmp = a[i]; 
	        a[i]=k*a[i+1];    // rest
	        k = tmp;        // getting orgnl value using tmp 
	    }
	}
	cout<<"Array: ";
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";    //output
	}
	cout<<endl;
	return 0;
}