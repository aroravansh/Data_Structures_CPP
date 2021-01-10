#include <iostream>
using namespace std;
/*
Given an integer array A of size N.
You need to check that whether there exist a element which is strictly greater than all the elements
on left of it and strictly smaller than all the elements on right of it.
If yes,print the number else no
Example Input
Input 1:
 A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
Input 2:
 A = [5, 1, 4, 4]
Example Output
Output 1:
 6
Output 2:
 No peak array
*/
int main() {
	// your code goes here
	int n;        //size of array
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];     //input of x coordinates
	}
	int ans=0;
	int l[n];
    int r[n];
    l[0]=A[0];
    r[n-1]=A[n-1];
    for(int i=1;i<n;i++){
        l[i] = max(A[i],l[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        r[i] = min(A[i],r[i+1]);
    }
	for(int i=1;i<n-1;i++){
        if(A[i]>l[i-1]&&A[i]<r[i+1]){
            cout<<"Perfect peak array: "<<A[i]<<endl;
            ans =1;
            break;
        }
    }
    if(ans==0)
     cout<<"No peak array!"<<endl;
	return 0;
}
