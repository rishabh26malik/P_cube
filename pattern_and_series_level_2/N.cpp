#include<iostream>
using namespace std;
int main() 
{
	int n,space,k=1,b4space=0,afterSpace;			
	cout<<"enter n : ";
	cin>>n;
	int i,j;
	space=n-2;
	afterSpace=n-3;
	for(i=1;i<=n;i++)
	{
		if(i==1 || i==n){
			cout<<i;
			for(j=1;j<=space;j++)
				cout<<" ";
			cout<<i<<endl;
		}
		else{
			cout<<i;
			for(j=1;j<=b4space;j++)
				cout<<" ";
			cout<<i;
			for(j=1;j<=afterSpace;j++)
				cout<<" ";
			cout<<i;
			cout<<endl;
			b4space++;
			afterSpace--;
		}
	}
	return 0; 
} 

