#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,k,j,freq,flag=0;
	cout<<"enter n , k : ";
	cin>>n>>k;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	freq=1;
	for(i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])
			freq++;
		else
		{
			if(freq==k)
			{
				flag=1;
				cout<<arr[i-1]<<" ";
				//freq=1;
			}
			freq=1;
		}
	}
	if(flag==0)
		cout<<"no such element"<<endl;
	return 0;
}
