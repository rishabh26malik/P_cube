
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
		for(j=1;j<=k;j++){
			//if(j==1 || j==k)		
				cout<<"*";
			//else
			//	cout<<" ";
		}
		cout<<endl;
		k+=2;
		space--;
	}

	k=2*(n-1)-1;
	space=1;
	for(i=1;i<n;i++)
	{
		for(j=1;j<=space;j++)
			cout<<" ";
		for(j=1;j<=k;j++){
			//if(j==1 || j==k)		
				cout<<"*";
			//else
			//	cout<<" ";
		}
		cout<<endl;
		k-=2;
		space++;
	}

	return 0; 
} 
