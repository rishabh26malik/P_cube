
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,fact,num,tmp,sum=0;
	cout<<"enter n";
	cin>>n;
	tmp=n;
	while(tmp>0){
		num=tmp%10;
		fact=1;
		tmp/=10;
		for(i=1;i<=num;i++)
			fact*=i;
		cout<<fact<<" ";
		sum+=fact;
	}
	cout<<endl;
	cout<<"sum = "<<sum<<endl;
	return 0; 
} 
