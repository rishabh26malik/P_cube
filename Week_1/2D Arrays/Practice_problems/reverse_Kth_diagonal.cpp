
#include<iostream>
#include<math.h>
using namespace std;
int m,n;

void reverse(int **a,int k)
{
	int i,j,start_row,start_col;
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

int main() 
{
	int i,j,k,start_row,start_col;
	cout<<"enter n ,m , k :";
	cin>>n>>m>>k;
	int **a;
	a=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
		a[i]=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	reverse(a,k);
	
	return 0; 
} 
