/*
	5, 2, 19, 13, 41,32,71,....
*/

#include<iostream>
using namespace std;

int main() 
{
	int term,space=0,a,b,i,n;
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
				term-=a;	
				a+=3;
			}
			else{
				term+=b;
				b+=11;
			}
			cout<<term<<",";
		}	
	
	}	
	else if(n==1)
		cout<<a<<end;
	else
		cout<<a<<","<<b<<endl;
	return 0; 
} 
