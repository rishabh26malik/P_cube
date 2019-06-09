#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int product(int n, int m)
{
	if(m==0)
		return 0;
	return n+product(n,m-1);
}


int main()
{
	int n,m;
	cout<<"enber 2 numbers : ";
	cin>>n>>m;
	cout<<product(n,m)<<endl;
	return 0;
}
