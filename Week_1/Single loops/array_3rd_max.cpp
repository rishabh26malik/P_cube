
#include<iostream>
#include<math.h>
using namespace std;

int Max(int a, int b){
	return (a>b)?a:b;
}

int Min(int a, int b){
	return (a<b)?a:b;
}

int main() 
{
	int i,n,max1,max2,max3,m1,m2,m3;
	cout<<"enter n";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	max1=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]!=max1){
			max2=arr[i];
			break;
		}
	}	
	i++;
	while(i<n){
		if(arr[i]!=max2 && arr[i]!=max1)
		{
			max3=arr[i];
			break;
		}
		i++;
	}
	if(i==n)
	{
		cout<<"3rd max does not exit"<<endl;
		return 0;
	}
	//cout<<max1<<" "<<max2<<" "<<max3<<endl;
	m1=Max(Max(max1,max2),max3);
	m3=Min(Min(max1,max2),max3);
	if(max1 != m1 && max1 != m3)
		m2=max1;
	else if(max2 != m1 && max2 != m3)
		m2=max2;
	else 
		m3=max3;
	
	//cout<<m1<<" "<<m2<<" "<<m3<<" "<<i<<endl;
	i++;
	//cout<<i<<endl;
	for(;i<n;i++){
		if(arr[i]>m1){
			m3=m2;
			m2=m1;
			m1=arr[i];
		}
		else if(arr[i]>m2 && arr[i]!=m1){
			m3=m2;
			m2=arr[i];
		}
		else if(arr[i]>m3 && arr[i]!=m2 && arr[i]!=m1)
			m3=arr[i];
	}
	cout<<m1<<" "<<m2<<" "<<m3<<endl;
	return 0; 
} 
