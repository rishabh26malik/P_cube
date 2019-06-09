
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n,max=-1,limit,min=1000,tmpMax,tmpMin;
	cout<<"enter n";
	cin>>n;
	limit=n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	if(n%2==1)
		limit=n-1;
	for(i=0;i<limit;i+=2){
		tmpMax=(arr[i]>arr[i+1])?arr[i]:arr[i+1];
		tmpMin=(arr[i]<arr[i+1])?arr[i]:arr[i+1];
		if(max<tmpMax)
			max=tmpMax;
		if(min>tmpMin)
			min=tmpMin;
	}
	if(n%2==1){
		if(max<arr[n-1])
			max=arr[n-1];
		if(min>arr[n-1])
			min=arr[n-1];
	}
	cout<<max<<" "<<min<<endl;
	return 0; 
} 
