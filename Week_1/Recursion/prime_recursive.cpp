#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n, int i)
{
	if(n==1 || n%i==0)
		return 0;
	if(n==2 || i*i>n)
		return 1;
	return prime(n,i+1);	
}

int main()
{
	int n,ch;
	cout<<"enter number  : ";
	cin>>n;
	ch=prime(n,2);
	if(ch==0)
		cout<<"not prime"<<endl;
	else
		cout<<"prime"<<endl;
	return 0;
}
