
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	long int sum=0,a,b;
	int n,i;
	cout<<"enter a,b :";
	cin>>a>>b;
	cout<<"enter term # ";
	cin>>n;
	cout<<"series : ";
	if(n>2){
		for(i=3;i<=n;i++){
			if(i%2==0){
				b*=2;
				sum+=b;
				cout<<b<<" ";
			}
			else{
				a*=3;
				sum+=a;
				cout<<a<<" ";
			}
		}
	}
	else if(n==1){
		cout<<a;
		sum=a;
	}
	else{
		cout<<b;	
		sum=b+a;
	}
	cout<<endl;
		
	if(n%2==0)
		cout<<"Nth term = "<<b<<endl;
	else
		cout<<"Nth term = "<<a<<endl;
	cout<<"sum = "<<sum<<endl;
	return 0; 
} 
