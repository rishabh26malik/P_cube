
#include<iostream>
#include<math.h>
using namespace std;
int n,m,l;
int min(int a, int b, int c, int &arr){
	if(a<=b && a<=c){
		arr=1;
		return a;
	}
	else if(b<=a && b<=c){
		arr=2;
		return b;
	}
	else{
		arr=3;
		return c;
	}
}

void merge2array(int a[],int i, int b[],int j, int c[], int &k){
	
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<n){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<m){
		c[k]=b[j];
		j++;
		k++;
	}
}

int main() 
{
	int i,j,k,arr_name,min_no,t;
	cout<<"enter n , m, l :";
	cin>>n>>m>>l;
	int a[n],b[m],d[l],c[n+m+l];
	cout<<"enter array 1 : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter array 2 : ";
	for(i=0;i<m;i++)
		cin>>b[i];
	cout<<"enter array 3 : ";
	for(i=0;i<l;i++)
		cin>>d[i];

	i=0;
	j=0;
	t=0;
	k=0;
	while(i<n && j<m && t<l)
	{
		min_no=min(a[i],b[j],d[t],arr_name);
		if(arr_name==1){
			c[k]=a[i];
			i++;
			k++;
		}
		else if(arr_name==2){
			c[k]=b[j];
			j++;
			k++;
		}
		else{
			c[k]=d[t];
			k++;
			t++;
		}
	}
	if(arr_name==1)
		merge2array(b,j,d,t,c,k);
	else if(arr_name==2)
		merge2array(a,i,d,t,c,k);
	else
		merge2array(a,i,b,j,c,k);
	 
	cout<<"merged array : ";
	for(i=0;i<k;i++)
		cout<<c[i]<<" ";
	return 0; 
}
