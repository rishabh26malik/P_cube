
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,k;
	cout<<"enter array length : ";
	cin>>n;
	int arr[n];
	cout<<"enter number to search :";
	cin>>k;
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++){
		if(arr[i]==k){
			break;
		}
	}
	cout<<"index = "<<i<<endl;
	return 0; 
} 
