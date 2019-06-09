#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bin2dec(string n,int last,int exp)
{
	if(last<0)
		return 0;
	
	return (n[last]-'0')*pow(2,exp) + bin2dec(n,last-1,exp+1);
}


int main()
{
	string n;
	int len;
	cout<<"enter number  : ";
	cin>>n;
	len=n.length();
	cout<<bin2dec(n,len-1,0)<<endl;;
	return 0;
}
