#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

void reverse(int *arr,int start, int end)
{
	while(start<end)
	{
		swap(&arr[start],&arr[end]);
		start++;
		end--;
	}
}

int main()
{	
	int n,i,k,j;
	cout<<"enter n , k : ";
	cin>>n>>k;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i=i+k)
	{
		if(i+k>n-1)
			reverse(arr,i,n-1);
		else
			reverse(arr,i,i+k-1);
	}
	cout<<"updated array : ";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
