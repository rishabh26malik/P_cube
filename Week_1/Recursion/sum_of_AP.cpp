#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum_of_AP(int a, int d,int n)
{
	if(n==0)
		return 0;
	return a+sum_of_AP(a+d,d,n-1);
}


int main()
{
	int a,d,n;
	cout<<"enter a , d , n: ";
	cin>>a>>d>>n; 
	cout<<sum_of_AP(a,d,n)<<endl;
	return 0;
}
