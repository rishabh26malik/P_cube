
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,j,tmp;
	cout<<"enter n :";
	cin>>n;
	int a[n][n],b[n][n];
	cout<<"enter 1st matrix : "<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
	cout<<"enter 2nd matrix : "<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>b[i][j];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]+b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0; 
} 
