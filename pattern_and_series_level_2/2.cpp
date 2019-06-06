/*
	n=5	m=4

	*****
	 *   *
	  *   *
	   *****

*/

#include<iostream>
using namespace std;

int main() 
{
	int n,m,space=0;			
	cout<<"enter n , m : ";
	cin>>n>>m;
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=0;j<space;j++)
			cout<<" ";
		if(i!=1 && i!=m){
			for(j=1;j<=n;j++)
			{
				if(j==1||j==n)
					cout<<"*";
				else
					cout<<" ";
			}
		}
		else{
			for(j=1;j<=n;j++)
			{
				cout<<"*";
			}
		}
		space++;
		cout<<endl;
	}
	return 0; 
} 
