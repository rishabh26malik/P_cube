#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-'a'+'A';
		i++;
	}
	cout<<str<<endl;
	return 0; 
} 
