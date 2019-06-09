
#include<iostream>
#include<math.h>
using namespace std;
int min(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}

int main() 
{
	int i,j,k,t,n,m,l,min_length;
	cout<<"enter n , m, l :";
	cin>>n>>m>>l;
	min_length=min(min(n,m),l);
	int a[n],b[m],c[l],d[min_length];
	cout<<"enter array 1 : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter array 2 : ";
	for(i=0;i<m;i++)
		cin>>b[i];
	cout<<"enter array 3 : ";
	for(i=0;i<l;i++)
		cin>>c[i];

	i=0;
	j=0;
	t=0;
	k=0;
	while(i<n && j<m && t<l)
	{
		if(a[i]==b[j] && b[j]==c[t])
		{
			if(k=0){
				d[k]=a[i];
				i++;
				j++;
				t++;
				k++;
			}
			else if(a[i]==c[k-1])
			{
				i++;
				j++;
				t++;
			}
			else
			{
				d[k]=a[i];
				i++;
				j++;
				t++;
				k++;
			}
		}
		else if(a[i]<b[j] && a[i]<c[t])
			i++;
		else if(b[j]<a[i] && b[j]<c[t])
			j++;
		else if(c[t]<a[i] && c[t]<b[j])
			t++;
		else if(a[i]==b[j] && a[i]<c[t])
		{
			i++;
			j++;
		}
		else if(b[j]==c[t] && b[j]<a[i])
		{
			j++;
			t++;
		}
		else
		{
			i++;
			t++;
		}
	}
	
	 
	cout<<"common elements : ";
	for(i=0;i<k;i++)
		cout<<d[i]<<" ";
	return 0; 
}
