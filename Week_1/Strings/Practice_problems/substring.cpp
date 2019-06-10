#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int j,i,len=str.length(),c;
	char sub[len]; 
	for(i=0;i<len;i++)
	{
		c=0;
		for(j=i;j<len;j++)
		{
			sub[c]=str[j];
			c++;
			sub[c]=0;
			cout<<sub<<endl;
		}
	}
	return 0; 
} 
