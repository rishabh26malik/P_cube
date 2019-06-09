
#include<iostream>
#include<math.h>
using namespace std;

int check_pal(int num[],int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
		if(num[i]!=num[n-i-1])
			return 0;
	}
	return 1;
}


int main() 
{
	int i=0,n;
	cout<<"enter length of array : ";
	cin>>n;
	int num[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>num[i];
	if(check_pal(num,n))
		cout<<"palindrome"<<endl;
	else
		cout<<"not palindrome"<<endl;
	
	cout<<endl;
	return 0; 
} 
