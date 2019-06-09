#include<cmath>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,globalmax=INT_MIN,localmax=0;
	cout<<"enter length of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		localmax+=arr[i];
		if(globalmax<localmax)
			globalmax=localmax;
		if(localmax<0)
			localmax=0;
	}
	cout<<globalmax<<endl;
	return 0; 
} 
