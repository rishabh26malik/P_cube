#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{	
	int n,i,j,count=0,m;
	cout<<"enter n , m: ";
	cin>>n>>m;
	int arr[n],b[m];
	cout<<"enter 1st array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter 2nd array : ";
	for(i=0;i<m;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(pow(arr[i],b[j])>pow(b[j],arr[i]))
				count++;
			/*
			if(arr[i]>3 && b[j]>3 && arr[i]<b[j])
				count++;
			else if(arr[i]>=1 && b[j]>=1 && arr[i]<=3 && b[j]<=3)
			{
					
				if(arr[i]>b[j])
					count++;
			}	
			else if(arr[i]<b[j])
			{
				count++;
			}			
			*/
		}
	cout<<count<<endl;
	return 0;
}
