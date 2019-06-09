
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,j,tmp;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[n]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	
	for(i=1;i<n-1;i++)
		for(j=1;j<m-1;j++)
		{
			tmp=a[i][j];
			if(tmp > a[i-1][j] && tmp > a[i][j-1] && tmp > a[i][j+1] && tmp > a[i+1][j]  )
				cout<<tmp<<endl;
		}
	
	return 0; 
} 
