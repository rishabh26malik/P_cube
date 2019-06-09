#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,m,j,k,tmp,end;
	cout<<"enter array length : ";
	cin>>n;
	cout<<"enter no. of students : ";
	cin>>m;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	k=0;
	tmp=arr[m-1]-arr[0];
	for(i=1;i<n;i++)
	{
		if(i+m>n)
			break;
		//cout<<arr[i+m-1]<<" "<<arr[i]<<endl;
		if(arr[i+m-1]-arr[i]<tmp)
		{
			tmp=arr[i+m-1]-arr[i];
			k=i;
		}
	}
	//cout<<tmp<<" "<<k<<" "<<i<<endl;
	i=k;
	while(i<k+m)
	{
		cout<<arr[i]<<" ";
		i++;
	}
	cout<<endl;
	return 0;
}
