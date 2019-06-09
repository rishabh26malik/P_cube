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
	int i,n,t,tmp=0;
	long int sum=0,arr_sum=0;
	cout<<"enter no. of test cases : ";
	cin>>t;
	while(t--){
		cout<<"enter array length : ";
		cin>>n;
		tmp=0;
		int arr[n-1];
		cout<<"enter array  ";
		for(i=0;i<n-1;i++)
			cin>>arr[i];
		for(i=1;i<=n;i++)
			tmp=tmp^i;
		for(i=0;i<n-1;i++)
			tmp=tmp^arr[i];
		cout<<"missing number = "<<tmp<<endl;
	}
	return 0; 
} 
