
#include<iostream>

using namespace std;

int main() 
{
	int n,space,k=1;			
	cout<<"enter n : ";
	cin>>n;
	int i,j;
	space=n-2;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<n){
			cout<<i;
			for(j=1;j<=space;j++)
				cout<<" ";
			cout<<n-i+1<<endl;
		}
		else if(i==n){
			for(j=n;j>=1;j--)
				cout<<j;
			cout<<endl;
		}
		else{
			cout<<n-k;
			k++;
			for(j=1;j<=space;j++)
				cout<<" ";
			cout<<i-n+1<<endl;
		}
	}
	return 0; 
} 
