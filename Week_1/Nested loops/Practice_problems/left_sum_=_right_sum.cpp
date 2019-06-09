#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,j,max1;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	max1=arr[0];
	for(i=1;i<n-1;i++)
	{
		if(arr[i]>=max1)
		{
			max1=arr[i];
			for(j=i+1;j<n;j++)
				if(arr[j]<max1)
					break;
			if(j==n)
			{
				cout<<max1<<endl;
				break;
			}
		}
	}
	if(i==n-1)
		cout<<"no such element"<<endl;
	return 0;
}
