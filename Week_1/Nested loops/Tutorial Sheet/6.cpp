#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,k,j,m,even=0,odd=0,e=0,o=0;
	cout<<"enter n , m : ";
	cin>>n>>m;
	int mat[n][m];
	cout<<"enter matrix : ";
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>mat[i][j];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(mat[i][j]%2)
				odd++;
			else
				even++;
	int Earr[even],Oarr[odd];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if(mat[i][j]%2)
			{
				Oarr[o]=mat[i][j];
				o++;
			}
			else
			{
				Earr[e]=mat[i][j];
				e++;
			}
		}
	for(i=0;i<even;i++)
		cout<<Earr[i]<<" ";
	cout<<endl;
	
	for(i=0;i<odd;i++)
		cout<<Oarr[i]<<" ";
	cout<<endl;
	
	return 0;
}
