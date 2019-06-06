
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{

	int i=1,n,max=-1;
	cout<<"enter number : ";
	cin>>n;
	for(i=1;i*i<=n;i++);
	cout<<i-1<<endl;
	return 0; 
} 
