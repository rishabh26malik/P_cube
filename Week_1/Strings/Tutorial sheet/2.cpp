#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int i=0,count=0;;
	while(str[i]!='\0')
	{
		if(str[i]>='1' && str[i]<='9')
			count++;
		i++;
	}
	cout<<count<<endl;
	return 0; 
} 
