#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{

	if(n<=0)
		return 0;
	if(n==1)
		return 1;
	return fibo(n-1) + fibo(n-2);
}


int main()
{
	int n;
	cout<<"enter number  : ";
	cin>>n;
	cout<<fibo(n-1)<<endl;
	return 0;
}
