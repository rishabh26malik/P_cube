#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{	
	int n,i,k,j,left=0,right;
	cout<<"enter n , k: ";
	cin>>n>>k;
	right=n-1;
	int arr[n];
	cout<<"enter array : ";
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	while(left<right)
	{
		if(arr[left]+arr[right]==k)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		else if(arr[left]+arr[right]<k)
			left++;
		else
			right--;
	}
	cout<<"NO"<<endl;
	return 0;
}
