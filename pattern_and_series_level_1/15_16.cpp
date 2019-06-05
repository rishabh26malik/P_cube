
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	int n,r,i;
	long int a,sum=0;
	cout<<"enter n : ";
	cin>>n;
	cout<<"enter a, r : ";
	cin>>a>>r;
	sum=a;
	for(i=1;i<n;i++){
		a*=r;
		sum+=a;
	}
	cout<<a<<endl;
	cout<<"sum = "<<sum<<endl;
	return 0;
}
