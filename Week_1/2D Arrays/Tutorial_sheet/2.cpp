
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,idx,j,sum=0,sum2=0;
	cout<<"enter n :";
	cin>>n;
	int a[n][n],c[m]={0};
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]>n*n || a[i][j]<1)
			{
				cout<<"not magic"<<endl;
				return 0;
			}
	sum=0;
	for(i=0;i<n;i++)
		sum+=a[0][i];
	cout<<"sum = "<<sum<<endl;
	//  ROW CHECK
	for(i=1;i<n;i++)
	{
		sum2=0;
		for(j=0;j<n;j++)
		{
			sum2+=a[i][j];
		}
		if(sum2!=sum)
		{
			cout<<"1 not magic"<<endl;
			return 0;
		}
		cout<<"sum2 = "<<sum<<endl;
	}
	
	//  COLUMN CHECK
	for(j=0;j<n;j++)
	{
		sum2=0;
		for(i=0;i<n;i++)
		{
			sum2+=a[i][j];
		}
		if(sum2!=sum)
		{
			cout<<"2 not magic"<<endl;
			return 0;
		}
		cout<<"sum2 = "<<sum<<endl;
	}
	sum2=0;
	for(i=0;i<n;i++)
		sum2+=a[i][i];
	if(sum2!=sum)
	{
		cout<<"3 not magic"<<endl;
		return 0;
	}
	cout<<"sum2 = "<<sum<<endl;
	
	cout<<" magic"<<endl;
	
	return 0; 
} 
