
#include<iostream>
#include<math.h>
using namespace std;

int binary2decimal(int num[],int n)
{
	int val=0,i,wt=1;;
	
	for(i=n-1;i>=0;i--){
		if(num[i]==1)
			val+=wt;;
		wt*=2;
	}
	return val;
}


int main() 
{
	int dec1,dec2,tmp,i=0,n1,n2;
	cout<<"enter length of both binary number : ";
	cin>>n1>>n2;
	int num1[n1],num2[n2];
	cout<<"enter 1st number : ";
	for(i=0;i<n1;i++)
		cin>>num1[i];
	cout<<"enter 2nd number : ";
	for(i=0;i<n2;i++)
		cin>>num2[i];
	dec1=binary2decimal(num1,n1);
	dec2=binary2decimal(num2,n2);
	cout<<dec1-dec2<<endl;
	return 0; 
} 
