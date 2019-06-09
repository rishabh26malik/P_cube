
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,tmp;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	for(i=0;i<n/2;i++){
		tmp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-1-i]=tmp;
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0; 
} 
