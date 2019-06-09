
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,idx,j,max1,col;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[m+n]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	
	for(i=0;i<m;i++)
		c[i]=a[0][i];
	////////////////// columns
	for(i=1;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]>c[j])
				c[j]=a[i][j];
		}		
	}
	cout<<"columns"<<endl;
	for(i=0;i<m;i++)
		cout<<c[i]<<" ";
	cout<<endl;
	
	/////////////////////// row
	for(i=0;i<n;i++)
		c[i]=a[i][0];

	cout<<"rows"<<endl;
	for(j=1;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i][j]>c[i])
				c[i]=a[i][j];
		}		
	}
	for(i=0;i<n;i++)
		cout<<c[i]<<" ";
	cout<<endl;
	
	return 0; 
} 
