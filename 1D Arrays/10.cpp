
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,k;
	cout<<"enter n :";
	cin>>n;
	int num1[n],num2[n],result[n];;
	cout<<"enter first number : ";
	for(i=0;i<n;i++)
		cin>>num1[i];
	cout<<"enter second number : ";
	for(i=0;i<n;i++)
		cin>>num2[i];
	for(i=0;i<n;i++){
		if(num1[i]==num2[i])
			result[i]=0;
		else
			result[i]=1;
	}
	cout<<"xor = ";
	for(i=0;i<n;i++)
		cout<<result[i]<<" ";
	cout<<endl;
	return 0; 
} 
