#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{	
	int freq=0,n,i,k,j,prev_freq=0,prev_num;
	cout<<"enter n : ";
	cin>>n;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	freq=0;
	prev_freq=freq;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			freq++;
			prev_num=arr[0];
		}
		else if(arr[i]==arr[i-1])
			freq++;
		else if(arr[i]!=arr[i-1])
		{
			if(freq>prev_freq){
			prev_freq=freq;
			prev_num=arr[i-1];}
			freq=1;
			
		}
	}
	cout<<prev_freq<<" "<<prev_num<<endl;
	return 0;
}				// 1 1 1 2 2 3 4 5 6
