
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	int n,k=1,space;
	cout<<"enter n";
	cin>>n;
	space=n-1;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
			cout<<" ";
		for(j=1;j<=k;j++)
			cout<<"*";
		cout<<endl;
		k+=2;
		space--;
	}
	return 0; 
} 
