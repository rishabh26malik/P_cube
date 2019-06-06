
#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,i;
	cout<<"enter a number : ";
	cin>>n;
	for(i=2;i<=limit;i++)
	{
		if(n%i==0){
			cout<<"not prime"<<endl;
			return 0;
		}		
	}
	cout<<"prime"<<endl;
	return 0; 
} 
