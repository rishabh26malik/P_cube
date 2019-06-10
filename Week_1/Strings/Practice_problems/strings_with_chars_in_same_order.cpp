#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	int i=1,len;
	string str1,str2,s1="",s2="";
	cout<<"enter string 1 : ";
	cin>>str1;
	cout<<"enter string 2 : ";
	cin>>str2;
	len=str2.length();
	s1=s1+str1[0];
	while(str1[i]!='\0')
	{
		if(str1[i]!=str1[i-1])
			s1=s1+str1[i];
		i++;
	}
	cout<<"s1 - "<<s1<<endl;
	s2=s2+str2[0];
	i=1;
	while(str2[i]!='\0')
	{
		if(str2[i]!=str2[i-1])
			s2=s2+str2[i];
		i++;
	}
	cout<<"s2 - "<<s2<<endl;
	if(s1.length()==s2.length())
	{
		i=0;
		while(s1[i]!='\0')
		{
			if(s1[i]!=s2[i])
			{
				cout<<"NO"<<endl;
				return 0;
			}
			i++;
		}
	}
	cout<<"YES"<<endl;
	return 0; 
} 
