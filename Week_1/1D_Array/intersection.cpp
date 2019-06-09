#include<bits/stdc++.h>
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
			i++;
		}
		else if(b[j]<a[i])
		{
			j++;
		}
		else{
			if(k==0){
				c[k]=a[i];
				i++;
				j++;
				k++;
			}
			else if(a[i]==c[k-1])
			{	
				i++;
				j++;
			}
			else
			{
				c[k]=a[i];
				i++;
				j++;
				k++;
			
			}
		}
		
	}
	cout<<"merged array : ";
	for(i=0;i<k;i++)
		cout<<c[i]<<" ";
	return 0; 
} 
