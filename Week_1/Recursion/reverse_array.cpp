#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int reverse(int arr[], int l, int r)
{
	if(l<r)
	{
		swap(&arr[l],&arr[r]);
		reverse(arr,l+1,r-1);
	}
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
	reverse(arr,0,n-1);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
