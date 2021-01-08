#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
Implement the next permutation, which rearranges numbers into the numerically next greater permutation
of numbers for a given array A of size N.
If such arrangement is not possible, it must be rearranged as the lowest possible order i.e., sorted in
an ascending order.
Input 1:
    A = [1, 2, 3]
Output 1:
    [1, 3, 2]
Input 2:
    A = [3, 2, 1]
Output 2:
    [1, 2, 3]
Input 3:
    A = [1, 1, 5]
Output 3:
    [1, 5, 1]
*/
void nextPerm(vector<int> &A) {
    int i,j,small,big,temp;
    for(i=A.size()-1;i>0;i--)
    {
        if(A[i]>A[i-1])
            break;
    }
    if(i==0)
    {
        sort(A.begin(),A.end());
        return ;
    }
    small=i-1;
    big=i;
    temp=big;
    for(i=A.size()-1;i>big;i--)
    {
        if(A[i]>A[small] && A[i]<A[temp])
            temp=i;
    }
    int t=A[temp];
    A[temp]=A[small];
    A[small]=t;
    small++;
    sort(A.begin()+small,A.end());
}
int main() {
	// your code goes here
	int n,x;
	cin>>n;                //size of array
	vector<int> v;
	for(int i=0;i<n;i++)
	{
	    cin>>x;        //input
	    v.push_back(x);
	}
	nextPerm(v);

	for(int i=0;i<n;i++)
	 cout<<v[i]<<" ";      //Output
	return 0;
}
