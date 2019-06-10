#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int max_in_array(int arr[], int n)
{
	if(n==0)
		return arr[0];
	return max(arr[n],max_in_array(arr,n-1));
}


int main()
{
	int n,i;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter array :";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<max_in_array(arr,n-1)<<endl;
	
	return 0;
}
