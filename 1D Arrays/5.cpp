
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,max,k,count=0;
	float mean=0;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<max<<endl;
	return 0; 
} 
