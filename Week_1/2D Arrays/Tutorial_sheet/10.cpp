
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,j,tmp,k;
	cout<<"enter n :";
	cin>>n;
	int a[n][n],b[n][n],c[n][n]={0};
	cout<<"enter 1st matrix : "<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
			
	cout<<"enter 2nd matrix : "<<endl;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>b[i][j];
	
	for (i = 0; i < n; i++) 
	{ 
		for (j = 0; j < n; j++) 
		{ 
		    c[i][j] = 0; 
		    for (k = 0; k < n; k++) 
		        c[i][j] += a[i][k] *  
		                     b[k][j]; 
		} 
	} 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0; 
} 
