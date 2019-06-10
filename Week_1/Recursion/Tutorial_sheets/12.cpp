#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int sum_array(int arr[], int i, int n)
{
	if(i<n)
	{
		return arr[i] + sum_array(arr,i+1,n); 
	}
	return 0;
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
	cout<<sum_array(arr,0,n)<<endl;
	return 0;
}
