
#include<iostream>
#include<math.h>
using namespace std;

void delete_idx(int num[],int n,int k)
{
	int i;
	for(i=k;i<n-1;i++)
		num[i]=num[i+1];
}


int main() 
{
	int i=0,n,k;
	cout<<"enter length of array : ";
	cin>>n;
	int num[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>num[i];
	cout<<"enter index to delete : ";
	cin>>k;
	if(k<=n-1)
	{
		delete_idx(num,n,k);
		for(i=0;i<n-1;i++)
			cout<<num[i]<<" ";
		cout<<endl;
	}
	else
		cout<<"invalid index"<<endl;
	return 0; 
} 
