#include <iostream>
using namespace std;
/*
Given an integer array A of size N.
You can pick B elements from either left or right end of the array A to get maximum sum.
Find and return this maximum possible sum.
Example Input
Input 1:
 A = [5, -2, 3 , 1, 2]
 B = 3
Input 2: 
 A = [1, 2]
 B = 1
Example Output
Output 1: 8
Output 2: 2
*/
int main() {
	// your code goes here
	int n;     //size of array
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];            //input
	int b;        //num of elements for max sum
	cin>>b;
	int result = 0;

    for(int i = 0; i < b; i++)
    {
        result += arr[i];
    }

    int sum = result;
    for(int i = 0; i < b; i++)
    {
        sum -= arr[b - 1 - i];
        sum += arr[n - 1- i];
        result = max(result, sum);
    }
    cout<<"Max sum is "<<result<<endl;     //output
	return 0;
}
