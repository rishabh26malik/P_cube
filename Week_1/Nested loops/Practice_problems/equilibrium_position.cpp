#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,j,lsum=0,rsum=0;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	lsum=arr[0];
	for(i=2;i<n;i++)
		rsum+=arr[i];
	if(lsum==rsum)
	{
		cout<<arr[1]<<" at position 1"<<endl;
		return 0;
	}
	for(i=2;i<n-1;i++)
	{
		lsum+=arr[i-1];
		rsum-=arr[i];
		if(lsum==rsum)
		{
			cout<<arr[i]<<" at position "<<i<<endl;
			return 0;
		}
	}
	cout<<"no such equilibrium"<<endl;
	return 0;
}
