#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,i,k,j,a,b,row=0;
	cout<<"enter n , a, b : ";
	cin>>n>>a>>b;
	int arr[n], mat[a][b];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i+=b)
	{
		for(j=0;j<b;j++)
		{
			mat[row][j]=arr[j+i];
		}
		row++;
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
