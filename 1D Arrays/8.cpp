
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,i,hamm=0;
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
		if(arr1[i]==arr2[i])
			hamm++;
		else
			break;
	}
	cout<<n-hamm<<endl;
	return 0; 
} 
