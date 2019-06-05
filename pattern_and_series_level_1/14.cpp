
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	long int i=1,x,fact=1;
	cout<<"enter x : ";
	cin>>x;
	double eps=0.5,prev_eps;
	while(eps!=0){
		prev_eps=eps;
		eps/=2;
	}
	cout<<prev_eps<<endl;	
	double sum=1,term=1;
	while(term>prev_eps){
		//fact*=i;
		
		term=term*x/i;
		sum+=term;
		i++;		
		//cout<<term<<endl;//<<fact<<" "<<prev_eps<<endl;
	}
	cout<<"sum upto "<<i<<"th term = "<<sum<<endl;
	return 0;
}
