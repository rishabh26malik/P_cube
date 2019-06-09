
#include<iostream>
#include<math.h>
using namespace std;

void mat_2_array(int **a, int *b,int n, int m)
{
	int k=0,i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			b[k]=a[i][j];
			k++;
		}
}

int main() 
{
	int i,j,k,m,n;
	cout<<"enter n ,m :";
	cin>>n>>m;
	int b[n*m];
	int **a;
	a=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++)
		a[i]=(int*)malloc(sizeof(int)*m);
	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];

	mat_2_array(a,b,n,m);
	for(i=0;i<n*m;i++)
		cout<<b[i]<<" ";
	return 0; 
} 
