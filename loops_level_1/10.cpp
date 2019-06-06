
#include<iostream>
#include<math.h>
using namespace std;

int hcf(int a, int b){
	if (a == 0) 
        return b; 
    return hcf(b % a, a); 
}

int main() 
{
	int num1,num2;
	cout<<"enter 2 numbers : ";
	cin>>num1>>num2;
	int gcd=hcf(num1,num2);
	cout<<gcd<<endl;
	if(gcd==1)
		cout<<"co-prime"<<endl;
	else
		cout<<"not co prime"<<endl;
	return 0; 
} 
