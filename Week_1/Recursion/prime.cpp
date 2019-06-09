#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int a, int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	else
		return a*power(a,n-1);
}


int main()
{
	int a,n;
	cout<<"enber base and exp : ";
	cin>>a>>n;
	cout<<power(a,n)<<endl;
	return 0;
}
