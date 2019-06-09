
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int tmp,i=0,n,num,arr[100]={0};
	cout<<"enter number : ";
	cin>>num;
	tmp=num;
	while(tmp>0)
	{	
		arr[i]=tmp%2;
		tmp/=2;
		i++;
	}
	i--;
	while(i>=0){
		cout<<arr[i];
		i--;
	}
	return 0; 
} 
