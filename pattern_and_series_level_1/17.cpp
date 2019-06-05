
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	int n,d,i;
	long int a,sum=0;
	cout<<"enter n : ";
	cin>>n;
	cout<<"enter a, d : ";
	cin>>a>>d;
	sum=a;
	for(i=1;i<n;i++){
		a+=d;
		sum+=a;
	}
	cout<<a<<endl;
	cout<<"sum = "<<sum<<endl;
	return 0;
}
