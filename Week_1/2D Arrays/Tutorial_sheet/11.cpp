
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,j,k;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[m]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	cout<<"enter k :";
	cin>>k;
	if(k<=n)
	{
		k=n-k;
		i=k;
		j=0;
	}
	else
	{
		k=k%m+1;
		i=0;
		j=k;
	}
	while(i<n && j<m){
			cout<<a[i][j]<<" ";
			i++;
			j++;
		}
	
	return 0; 
} 
