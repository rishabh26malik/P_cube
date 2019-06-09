#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,prev;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	cout<<arr[0]<<" ";
	prev=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]!=prev)
		{
			cout<<arr[i]<<" ";
			prev=arr[i];
		}
	}
	cout<<endl;
	return 0;
}
