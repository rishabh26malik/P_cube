
#include<iostream>
#include<math.h>
using namespace std;
void swap(int *a, int *b)
{
	int t=*a;
	*a=*b; 
	*b=t;
}
void update_array(int num[],int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		if(num[l]<0)
			l++;
		if(num[r]>0)
			r--;
		if(num[l]>0 && num[r]<0){
			swap(&num[l],&num[r]);
			l++;
			r--;
		}
	}
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
	update_array(num,n);
	for(i=0;i<n;i++)
		cout<<num[i]<<" ";
	cout<<endl;
	return 0; 
} 
