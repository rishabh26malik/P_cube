
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,tmp,sum=0;
	cout<<"enter n";
	cin>>n;
	tmp=n;
	while(tmp>0){
		sum+=tmp%10;
		tmp/=10;
	}
	cout<<"sum = "<<sum<<endl;
	return 0; 
} 
