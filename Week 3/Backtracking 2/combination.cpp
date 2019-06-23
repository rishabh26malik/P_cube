#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(char &a, char &b)
{
	char tmp=a;
	a=b;
	b=tmp;
}

void combine(int *a, int n, int r, int input_idx, int *out, int output_idx )
{
	int i;
	if(output_idx==r)
	{
		for(i=0;i<r;i++)
			cout<<out[i]<<" ";
			cout<<endl;
			return;
	}
	if(input_idx>=n)
		return;
	combine(a,n,r,input_idx+1,out,output_idx);
	out[output_idx]=a[input_idx];
	combine(a,n,r,input_idx+1,out,output_idx+1);
	
}

int main()
{
	int n,r,i;
	cout<<"enter n , r :";
	cin>>n>>r;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int out[r];
	combine(a,n,r,0,out,0);
	return 0;
}

