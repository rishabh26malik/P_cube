#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bin2dec(string n,int wt, int i)
{
	if(i<0)
		return 0;
	if(n[i]=='1')
		return wt+bin2dec(n,wt*2,i-1);
	else
		return bin2dec(n,wt*2,i-1);
}


int main()
{
	string n;
	int len;
	cout<<"enter number  : ";
	cin>>n;
	len=n.length();
	cout<<bin2dec(n,1,len-1)<<endl;;
	return 0;
}
