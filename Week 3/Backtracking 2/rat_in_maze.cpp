#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int isSafe(int a[][4],int n, int x, int y)
{
	if( (x>=0) && x<=n-1 && y>=0 && y<=n-1 && a[x][y]==1 )
		return 1;
	return 0;
}

int solveMaze(int a[][4], int n, int x, int y)
{
	if(x==n-1 && y==n-1)
		return 1;
	if(isSafe(a,n,x+1,y))
		return solveMaze(a,n,x+1,y);

	if(isSafe(a,n,x,y+1))
		return solveMaze(a,n,x,y+1);
	return 0;
}

int main()
{
	int n=4,r,i,j;
	int a[4][4];
	for(i=0;i<n;i++)
		for(j=0;j<4;j++)
			cin>>a[i][j];
	cout<<solveMaze(a,4,0,0);
	return 0;
}

