#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int i=1,len=str.length();
	while(str[i]!='\0')
	{
		if(str[i]<str[i-1])
		{
			cout<<"Unordered string"<<endl;
			return 0;
		}
		i++;
	}
	cout<<"Ordered string"<<endl;
	return 0; 
} 
