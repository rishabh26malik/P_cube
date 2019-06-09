
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,j,wt=1,max1,min1,idx;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[n]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i][j])
			{
				c[i]+=wt;
			}
			
		}
		wt*=2;
	}
	
	cout<<endl;
	
	max1=c[0];
	idx=0;
	for(i=1;i<n;i++)
		if(max1<c[i])
		{
			max1=c[i];
			idx=i;
		}
	cout<<"max = "<<idx<<endl;
	
	min1=c[0];
	idx=0;
	for(i=1;i<n;i++)
		if(min1>c[i])
		{
			min1=c[i];
			idx=i;
		}
	cout<<"min = "<<idx<<endl;
	
	return 0; 
} 
