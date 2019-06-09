
#include<iostream>
#include<math.h>
using namespace std;

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main() 
{
	int i,n,j;
	cout<<"enter n  :";
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			swap(&a[i][j],&a[j][i]);
		
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
			
	return 0; 
} 
