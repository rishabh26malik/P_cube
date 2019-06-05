
#//include<bits/std++.h>
#include<iostream>
using namespace std;
// i+j    even == +ve
int main() 
{
	int n,k=1,term=1;
	cout<<"enter n";
	cin>>n;
	int i,j,tmp;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			k=1;
		else
			k=0;
		
		for(j=1;j<=i;j++)
		{
			if(k)
				cout<<"-"<<term<<" ";
			else
				cout<<term<<" ";
			k=k-1;
			term++;
		}
			cout<<endl;
		}
	return 0; 
} 
