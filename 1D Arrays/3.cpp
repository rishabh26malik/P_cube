
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,k,count=0,l,r;
	float mean=0;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter range : ";
	cin>>l>>r;
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	
	for(i=0;i<n;i++){
		if(arr[i]>=l && arr[i]<=r)
			count++;
	}
	cout<<count<<endl;
	return 0; 
} 
