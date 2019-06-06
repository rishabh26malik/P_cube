/*
	1, 4, 15, 24, 45,60 ,91 ,112 ,...
*/

#include<iostream>
using namespace std;

int main() 
{
	int term,space=0,a,b,i,n,k=1;
	cout<<"enter first term : ";
	cin>>term;
	cout<<"enter a,b : ";
	cin>>a>>b;
	cout<<"enter n :";
	cin>>n;
	cout<<term<<",";
	if(n>2){
		for(i=1;i<=n;i++){
			if(i%2){
				term+=a*k;
				k+=2;	
				//a*=k;
			}
			else{
				term+=b;
				b+=10;
			}
			cout<<term<<",";
		}	
	
	}	
	else if(n==1)
		cout<<a<<endl;
	else
		cout<<a<<","<<b<<endl;
	return 0; 
} 
