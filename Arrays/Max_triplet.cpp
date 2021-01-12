#include <iostream>
using namespace std;
/*
Given an array of positive integers of size n. Find the maximum sum of triplet( ai + aj + ak ) 
such that 0 <= i < j < k < n and ai < aj < ak. 
Input: a[] = 2 5 3 1 4 9
Output: 16
Explanation:
All possible triplets are:-
2 3 4 => sum = 9
2 5 9 => sum = 16
2 3 9 => sum = 14
3 4 9 => sum = 16
1 4 9 => sum = 14
Maximum sum = 16
*/

int main() {
	// your code goes here
	int n;          //size of array
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];     //input
	int sum = 0;
	for (int i = 1; i < n - 1; ++i) {
        int m1 = 0, m2 = 0;
        // find maximum value(less than arr[i]) from 0 to i-1
        for (int j = 0; j < i; ++j)
            if (arr[j] < arr[i])
                m1 = max(m1, arr[j]);
        // find maximum value(greater than arr[i]) from i+1 to n-1
        for (int j = i + 1; j < n; ++j)
            if (arr[j] > arr[i])
                m2 = max(m2, arr[j]);
        if(m1 && m2)
             sum=max(sum,m1+arr[i]+m2);      // store maximum answer
    }
	cout<<"Max sum is "<<sum<<endl;
	return 0;
}
