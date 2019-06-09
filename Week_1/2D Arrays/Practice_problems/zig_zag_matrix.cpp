
#include<iostream>
#include<math.h>
using namespace std;
int m,n;

int main() 
{
	int i,j,k,start_row,start_col;
	cout<<"enter n ,m , k :";
	cin>>n>>m>>k;
	int a[n][m];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];


	for(k=0;k<n+m;k++)
	{
		if(k%2==0) 		//	print reverse
		{
			if(k<m){
			start_row=0;
			start_col=k;
			}
			else{
				start_row=k-m+1;
				start_col=m-1;
			}
		
			for(;start_row<n && start_col>=0;start_row++,start_col--)
				cout<<a[start_row][start_col]<<" ";
		}
		else
		{
			if(k<n){
				start_row=k;
				start_col=0;
			}
			else{
				start_row=n-1;
				start_col=k-n+1;
			}
			
			for(;start_row>=0 && start_col<m;start_row--,start_col++)
				cout<<a[start_row][start_col]<<" ";
		}
	}


	
	
	
	return 0; 
} 
