
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,d,i,j,tmp;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter no. of time to rotate : ";
	cin>>d;
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=1;i<=d;i++)
	{
		tmp=arr[0];
		for(j=0;j<n-1;j++)
			arr[j]=arr[j+1];
		arr[n-1]=tmp;
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0; 
} 
