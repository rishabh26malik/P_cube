/*
	72 = 2^3  X  3^2

*/


#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int n,power;
	cout<<"enter n";
	cin>>n;
	int i,j,limit=sqrt(n);
	for(i=2;i<=limit;i++)
	{
		power=0;
		while(n%i==0){
			power++;
			n=n/i;
		}		
		if(power)
			cout<<i<<"^"<<power<<endl;
	}
	return 0; 
} 
