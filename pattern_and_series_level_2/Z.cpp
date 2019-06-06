/*
	Z pattern
	eg. - n=5
	1 2 3 4 5
	      4
 	    3
	  2
	1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main() 
{
	int n,space;			
	cout<<"enter n : ";
	cin>>n;
	int i,j;
	space=n-2;
	for(i=1;i<=n;i++)
	{
		if(i==1 || i==n){
			for(j=1;j<=n;j++)
				cout<<j;
			cout<<endl;
		}
		else{
		for(j=1;j<=space;j++)
			cout<<" ";
		cout<<n-i+1<<endl;
		space--;
		}
	}
	return 0; 
} 
