#include <iostream>
#include <vector>
using namespace std;
/*
Give a N*N square matrix, return an array of its anti-diagonals
Input:  
1 2 3
4 5 6
7 8 9
Output :
[ 
  [1],
  [2, 4],
  [3, 5, 7],
  [6, 8],
  [9]
]
*/

int main() {
	// your code goes here
	int n;
	cin>>n;      //size of 2D array
	int arr[n][n];
	for(int i=0;i<n;i++)
	{ 
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[i][j];      //input
	    }
	}
	int x = (2*n)-1;
	vector<vector<int>> ans(x);      //resulting vector 
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<n;j++)
	    {
	        ans[i+j].push_back(arr[i][j]);       //pushback each row of anti-diagonals
	    }
	}
	for(int i=0;i<x;i++)
	{
	    for(int j=0;j<ans[i].size();j++)
	    {
	        cout<<ans[i][j]<<" ";         //output
	    }
	    cout<<endl;
	}
	return 0;
}
