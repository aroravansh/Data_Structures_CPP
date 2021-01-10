#include <iostream>
using namespace std;
/*
You are in an infinite 2D grid where you can move in any of the 8 directions :
 (x,y) to (x+1, y), (x - 1, y), (x, y+1), (x, y-1), (x-1, y-1), (x+1,y+1), (x-1,y+1), (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. 
Give the minimum number of steps in which you can achieve it. You start from the first point.
Example :
Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
It takes 1 step to move from (0, 0) to (1, 1). It takes one more step to move from (1, 1) to (1, 2).

*/

int main() {
	// your code goes here
	int n;        //size of array
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	{
	    cin>>x[i];     //input of x coordinates
	}
	for(int i=0;i<n;i++)
	{
	    cin>>y[i];     //input of y coordinates
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
        if(abs(x[i]-x[i+1])<=abs(y[i]-y[i+1]))
         ans+=abs(y[i]-y[i+1]);
        else{
            ans+=abs(x[i]-x[i+1]);
        }
    }
	cout<<"Min steps are: "<<ans<<endl;
	return 0;
}
