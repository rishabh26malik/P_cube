#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}


int main()
{
	int a,b;
	cout<<"enter 2 no. : ";
	cin>>a>>b;
	if(a>b)
		cout<<gcd(a,b)<<endl;
	else
		cout<<gcd(b,a);
	return 0;
}
