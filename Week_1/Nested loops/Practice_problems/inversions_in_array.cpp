#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,j;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(arr[i]>arr[j])
				cout<<arr[i]<<","<<arr[j]<<endl;
		
	return 0;
}
