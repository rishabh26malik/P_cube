
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,i,zero=0,one=0;
	cout<<"enter length of array : ";
	cin>>n;
	int arr[n];
	cout<<"enter  array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
			zero++;
		else
			one++;
	}
	if(zero>=one)
	{
		for(i=0;i<n;i++)
			arr[i]=0;
		for(i=1;i<n;i=i+2)
		{
			if(one>0){
				arr[i]=1;
				one--;
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
			arr[i]=1;
		for(i=0;i<n;i=i+2)
		{
			if(zero>0){
				arr[i]=0;
				zero--;
			}
		}
		//for(i=0;i<=zero*2-2;i=i+2)
			//arr[i]=0;
	}
	cout<<"result : ";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0; 
} 
