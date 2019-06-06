
#include<iostream>

using namespace std;

int main() 
{
	int n,k,left=1,right,space=0;			
	cout<<"enter n : ";
	cin>>n;
	int i,j;
	k=n;
	right=n*(n+1)-n+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
			cout<<" ";
		space+=2;
		for(j=1;j<=k;j++){
			cout<<left<<"*";
			left++;	
		}
		for(j=right;j<right+k;j++){
			cout<<j;
			if(j!=right+k-1)
				cout<<"*";
		}
		right=right-k+1;
		k--;
		cout<<endl;
		
	}
	return 0; 
} 
