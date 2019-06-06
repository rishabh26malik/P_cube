
#//include<bits/std++.h>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int num1,num2,i,limit;
	cout<<"enter 2 numbers : ";
	cin>>num1>>num2;
	limit=sqrt(num1);
	for(i=2;i<=limit;i++)
	{
		if(num1%i==0){
			cout<<"first no. not prime"<<endl;
			cout<<"not twin"<<endl;
			return 0;
		}		
	}
	if(i==limit+1){
		limit=sqrt(num2);
		for(i=2;i<=limit;i++)
		{
			if(num2%i==0){
				cout<<"second no. not prime"<<endl;
				cout<<"not twin"<<endl;
				return 0;
			}		
		}
		if(abs(num2-num1 == 2))
			cout<<"	twin"<<endl;
		else
			cout<<"not twin"<<endl;
	}
	return 0; 
} 
