#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,k,j,flag=0;
	cout<<"enter n , k: ";
	cin>>n>>k;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]+arr[j]==k)
			{
				flag=1;
				cout<<"YES"<<endl;
				break;
			}
	if(flag==0)
		cout<<"NO"<<endl;
	return 0;
}
