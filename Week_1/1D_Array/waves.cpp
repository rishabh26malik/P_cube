#include<algorithm>
#include<cmath>
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main() 
{
	int t,n,i,globalmax=INT_MIN,localmax=0;
	cout<<"enter length of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	if(n%2==1)
		t=n-1;
	else
		t=n;
	for(i=0;i<t;i+=2)
	{
		swap(&arr[i],&arr[i+1]);
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0; 
} 
