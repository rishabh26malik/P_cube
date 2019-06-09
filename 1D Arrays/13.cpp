
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,m,i;
	cout<<"enter length of array : ";
	cin>>n;
	int arr1[n],arr2[n];
	cout<<"enter 1st array : ";
	for(i=0;i<n;i++)
		cin>>arr1[i];
	cout<<"enter 2nd array : ";
	for(i=0;i<n;i++)
		cin>>arr2[i];
	for(i=0;i<n;i++)
	{
		if(arr1[i]%2==0 && arr2[i]%2==0)
			arr1[i]+=arr2[i];
		else if(arr1[i]%2==1 && arr2[i]%2==1)
			arr1[i]*=arr2[i];
	}
	cout<<"result : ";
	for(i=0;i<n;i++)
		cout<<arr1[i]<<" ";
	cout<<endl;
	return 0; 
} 
