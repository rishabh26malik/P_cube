/*

Given array of size n-1 of elements 1 to n with one element missing.
find the missing element.
Do it the T test cases.

*/
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,t;
	long int sum=0,arr_sum=0;
	cout<<"enter no. of test cases : ";
	cin>>t;
	while(t--){
		cout<<"enter array length : ";
		cin>>n;
		int arr[n-1];
		cout<<"enter array  ";
		for(i=0;i<n;i++)
			cin>>arr[i];
		sum=(n+1)*(n+2)/2;
		for(i=0;i<n;i++)
			arr_sum+=arr[i];
		cout<<"missing number = "<<sum-arr_sum<<endl;
	}
	return 0; 
} 
