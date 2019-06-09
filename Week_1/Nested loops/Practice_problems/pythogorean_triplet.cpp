#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,k,j;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-2;i++)
		for(j=i+1;j<n-1;j++)
			for(k=j+1;k<n;k++)
				if(arr[i]*arr[i] + arr[j]*arr[j] == arr[k]*arr[k])
				{
					cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<"found"<<endl;
					return 0;
				}
	cout<<"not such triplet"<<endl;
	return 0;
}
