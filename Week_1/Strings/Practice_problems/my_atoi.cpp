#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int my_atoi(string str)
{
	int i=0,num=0;
	while(str[i]!='\0')
	{
		if(str[i]>='0' && str[i]<='9')
		{
			num=num*10+str[i]-'0';
		}
		else
			return -1;
		i++;
	}
	return num;
}

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	cout<<my_atoi(str)<<endl;
	return 0; 
} 
