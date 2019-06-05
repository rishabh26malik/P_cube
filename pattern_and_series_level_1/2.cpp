
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	int n,k=1;
	cout<<"enter n";
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k;
			k++;
		}
		cout<<endl;
	}
	return 0; 
} 
