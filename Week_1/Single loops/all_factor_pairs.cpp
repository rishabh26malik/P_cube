
#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n;
	cout<<"enter n";
	cin>>n;
	int i,j,limit=sqrt(n);
	for(i=1;i<=limit;i++)
	{
		if(n%i==0)
			cout<<i<<","<<n/i<<endl;
			
	}

	return 0; 
} 
