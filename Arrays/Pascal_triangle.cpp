#include <iostream>
using namespace std;
/*
Pascal’s triangle is a triangular array of the binomial coefficients. 
Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle.
Input
6
Output
1  
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 
*/

int main() {
	// your code goes here
	int n;
	cin>>n;      //no of rows to print
	for(int i=1;i<=n;i++)
	{
	    int c=1;
	    for(int j=1;j<=i;j++)
	    {
	        cout<< c<<" ";  
            c = c * (i-j) / j;
	    }
	    cout<<endl;
	}
	return 0;
}
