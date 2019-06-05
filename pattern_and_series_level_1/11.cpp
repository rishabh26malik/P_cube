
#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int term_no=1;
	int i=3,x;
	cout<<"enter x : ";
	cin>>x;
	x=x*3.142/180;
	double eps=0.5,prev_eps;
	while(eps!=0){
		prev_eps=eps;
		eps/=2;
	}
	cout<<prev_eps<<endl;	
	double sum=x,term=x;
	while(term>prev_eps){
		term=term*x*x/(i*(i-1));
		if(term_no%2==1)		
			sum+=term;
		else
			sum-=term;
		i+=2;	
		term_no++;	
	}
	
		cout<<"sum upto "<<i<<"th term = "<<sum<<endl;
	sum=sin(sum);
	cout<<"sum upto "<<i<<"th term = "<<sum<<endl;
	return 0;
}
