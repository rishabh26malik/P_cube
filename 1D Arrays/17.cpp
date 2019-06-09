
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
	int dec,i=0,n;
	cout<<"enter length of binary number : ";
	cin>>n;
	int num[n];
	cout<<"enter number : ";
	for(i=0;i<n;i++)
		cin>>num[i];

	dec=binary2decimal(num,n);
	cout<<dec<<endl;
	return 0; 
} 
