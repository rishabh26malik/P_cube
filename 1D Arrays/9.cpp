
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,k,count=0,l,r;
	float strike=0;
	cout<<"enter array length : ";
	cin>>n;
	int run[n],ball[n];
	cout<<"enter runs : ";
	for(i=0;i<n;i++)
		cin>>run[i];
	cout<<"enter balls : ";
	for(i=0;i<n;i++)
		cin>>ball[i];
	strike=run[0]/ball[0];	
	for(i=1;i<n;i++){
		if(run[i]/ball[i] > strike)
			strike=(run[i]/ball[i])*100;
	}
	cout<<strike<<endl;
	return 0; 
} 
