#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str1,str2;
	cout<<"enter 2 strings : ";
	cin>>str1>>str2;
	int count_1[26]={0},count_2[26]={0};
	int j,i,len=str1.length(); 
	for(i=0;i<len;i++)
	{
		count_1[str1[i]-'a']++;
	}
	len=str2.length();
	
	for(i=0;i<len;i++)
	{
		count_2[str2[i]-'a']++;
	}
	
	for(i=0;i<26;i++)
	{
		if(count_1[i]!=count_2[i])
		{
			cout<<"not anagram"<<endl;
			return 0;
		}
	}
	cout<<"anagram"<<endl;
	return 0; 
} 
