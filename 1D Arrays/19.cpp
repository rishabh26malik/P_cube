#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;

void delete_idx(int num[],int n,int k)
{
	int i;
	for(i=k;i<n-1;i++)
		num[i]=num[i+1];
}

int main() 
{
	int idx,i,n,max,max2,k,count=0;
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
	//cout<<max<<endl;
	max2=INT_MIN;
	idx=0;
	for(i=0;i<n;i++){
		if(arr[i]>max2 && arr[i]<max){
			max2=arr[i];
			idx=i;
		}
	}
	//cout<<max2<<" "<<idx<<endl;
	
	delete_idx(arr,n,idx);
	for(i=0;i<n-1;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
		return 0; 
} 
