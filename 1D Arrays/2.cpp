
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,k;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl;
	return 0; 
} 
