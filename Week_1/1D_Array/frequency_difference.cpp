
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int m,n,i,j,k;
	cout<<"enter n , m :";
	cin>>n>>m;
	int a[n],b[m],c[n+m];
	cout<<"enter array 1 : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter array 2 : ";
	for(i=0;i<m;i++)
		cin>>b[i];
	i=0;
	j=0;
	k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]==b[j] )
		{
			i++;
			j++;
		}
		else{
			j++;
		}
	
	}
	while(i<n){
		c[k]=a[i];
		k++;
		i++;
	}
	
	cout<<"A - B =  ";
	for(i=0;i<k;i++)
		cout<<c[i]<<" ";
	return 0; 
} 
