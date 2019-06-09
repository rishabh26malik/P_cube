#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{	
	int freq=0,n,i,k,j;
	cout<<"enter n : ";
	cin>>n;
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
			cout<<arr[i-1]<<" - "<<freq<<endl;
			freq=1;
		}
	}
	cout<<arr[n-1]<<" - "<<freq<<endl;
	return 0;
}
