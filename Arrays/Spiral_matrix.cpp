#include <iostream>
using namespace std;
/*

Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:
 [ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ] 

*/

int main() {
	// your code goes here
	int n;
	cin>>n;     //size of array
	int arr[n][n];
	int c=1;
	for (int layer = 0; layer < (n + 1) / 2; layer++) {
            // direction 1 - traverse from left to right
            for (int ptr = layer; ptr < n - layer; ptr++) {
                arr[layer][ptr] = c++;
            }
            // direction 2 - traverse from top to bottom
            for (int ptr = layer + 1; ptr < n - layer; ptr++) {
                arr[ptr][n - layer - 1] = c++;
            }
            // direction 3 - traverse from right to left
            for (int ptr = n - layer - 2; ptr >= layer; ptr--) {
                arr[n - layer - 1][ptr] = c++;
            }
            // direction 4 - traverse from bottom to top
            for (int ptr = n - layer - 2; ptr > layer; ptr--) {
                arr[ptr][layer] = c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
             cout<<arr[i][j]<<" ";      //output 
            cout<<endl;
        }
	return 0;
}
