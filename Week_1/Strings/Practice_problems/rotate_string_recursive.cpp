#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void rotate(string str, int i, int n)
{
	if(i==n-1)
	{
		str[0]=str[i];
		return ;
	}
	rotate(str,i+1,n);
	str[i]=str[i+1];
	
}


int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	rotate(str,1,str.length()-1);
	cout<<str<<endl;
	return 0; 
} 
