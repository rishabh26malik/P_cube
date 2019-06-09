
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,m,idx,j,max1,grp,prev;
	cout<<"enter n, m :";
	cin>>n>>m;
	int a[n][m],c[n]={0};
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];
	for(i=0;i<n;i++){
		grp=0;
		prev=grp;
		for(j=0;j<m;j++)
		{
			if(j==0 && a[i][j]==1)
				grp=1;
			else if(a[i][j]==a[i][j-1] && a[i][j]==1)
				grp++;
			else{
				if(grp>prev)
				{
					prev=grp; 
					grp=1;
				}
			}
		}
		if(a[i][n-1]==1 && grp>prev) // for 1 in last column else part is never executed
		{	
			prev=grp;	// so we check here
		}
		c[i]=prev;
		cout<<prev<<endl;
	}
	max1=c[0];
	idx=0;
	for(i=1;i<n;i++)
		if(max1<=c[i])
		{
			idx=i;
			max1=c[i];
		}
	cout<<"max 1's in : "<<idx+1<<endl;
	return 0; 
} 

