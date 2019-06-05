
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	int n,k=1;
	cout<<"enter n";
	cin>>n;
	int i,j,tmp;
	for(i=1;i<=n;i++)
	{
		tmp=k+i-1;
		for(j=k+i-1;j>tmp-i;j--)
		{
			cout<<j<<" ";
			k++;
		}		
		cout<<endl;

	}
	return 0; 
} 
