#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	char out[100];
	cout<<"enter string : ";
	cin>>str;
	int idx,i=1,len=str.length(),count[26]={0};
	for(i=0;i<len;i++)
		count[str[i]-'a']++;
	
	for(i=1;i<26;i++)
		count[i]+=count[i-1];
	for(i=len-1;i>=0;i--)
	{
		idx=(count[str[i]-'a']--)-1;
		out[idx]=str[i];
	}
	out[idx+1]=0;
	cout<<out<<endl;
	return 0; 
} 
