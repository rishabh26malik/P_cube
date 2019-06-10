#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	int count[26]={0},max1,max_idx;
	cout<<"enter string : ";
	cin>>str;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
			count[str[i]-'a']++;
		i++;
	}
	max1=count[0];
	max_idx=0;
	i=1;
	while(i<26)
	{
		if(count[i]>max1)
		{
			max1=count[i];
			max_idx=i;
		}
		i++;
	}
	cout<<char(max_idx+'a')<<endl;
	return 0; 
} 

