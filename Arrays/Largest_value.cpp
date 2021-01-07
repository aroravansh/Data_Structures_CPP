#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
Given an array of numbers, arrange them in a way that yields the largest value. 
For example, 
INPUT 
{54, 546, 548, 60} 
Output
6054854654 
INPUT
{1, 34, 3, 98, 9, 76, 45, 4}
Output
998764543431 
*/
int mycompare(string a, string b)
{
    string x = a+b;
    string y = b+a;
    if(x.compare(y)>0)
     return 1;
    else
     return 0;
}
int main() {
	// your code goes here
	int n;
	cin>>n;    //size of array
	int arr[n];
	vector<string> s;     //string vector 
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];      //input
        s.push_back(to_string(arr[i]));    //converting to string and pushing to vector
	}
    sort(s.begin(),s.end(),mycompare);   //sorting with mycompare
	cout<<"Maximum value is: ";
	for(int i=0;i<s.size();i++)
	 cout<<s[i];       //Output
	return 0;
}
