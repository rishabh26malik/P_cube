
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{

	int i=1,n,max=-1;
	cout<<"start entering numbers : ";
	while(i){
		cin>>n;
		if(n>max)
			max=n;
		if(n<=0)
			break;
		
	}
	cout<<"max is "<<max<<endl;
	return 0; 
} 
