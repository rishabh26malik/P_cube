
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,idx,j,max1,col;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[m]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j])
				c[j]++;
		}		
	}
	max1=c[0];
	col=0;
	for(i=1;i<m;i++)
		if(c[i]>max1)
		{
			max1=c[i];
			col=i;
		}
	cout<<col<<endl;
	return 0; 
} 
