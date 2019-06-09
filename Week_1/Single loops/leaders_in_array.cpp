
#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,i,max;
	cout<<"enter n";
	cin>>n;
	int arr[n];
	cout<<"enter array elements : ";	
	for(i=0;i<n;i++)
		cin>>arr[i];
	max=arr[n-1];
	cout<<max<<" ";
	for(i=n-2;i>=0;i--){
		if(arr[i]>max){
			cout<<arr[i]<<" ";
			max=arr[i];
		}
	}
	return 0; 
} 
