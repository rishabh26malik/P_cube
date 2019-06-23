#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(char &a, char &b)
{
	char tmp=a;
	a=b;
	b=tmp;
}

void combine(int *a, int n, int r, int input_idx, int *out, int output_idx, int k )
{
	int i,sum;
	if(output_idx==r)
	{
		sum=0;
		for(i=0;i<r;i++)
			sum+=out[i];
		if(k==sum)
		{
			for(i=0;i<r;i++)
				cout<<out[i]<<" ";
			cout<<endl;
		}
		return;
	}
	if(input_idx>=n)
		return;
	combine(a,n,r,input_idx+1,out,output_idx,k);
	out[output_idx]=a[input_idx];
	combine(a,n,r,input_idx+1,out,output_idx+1,k);
	
}

int main()
{
	int n,r,i,k;
	cout<<"enter n , r ,k :";
	cin>>n>>r>>k;
	cout<<"enter array : ";
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int out[r];
	combine(a,n,r,0,out,0,k);
	return 0;
}

