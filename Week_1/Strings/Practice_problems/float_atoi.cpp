#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float my_atoi(string str)
{
	int i=0,num1=0,power=0,num2=0;
	while(str[i]!='\0' && str[i]!='.')
	{
		if(str[i]>='0' && str[i]<='9')
		{
			num1=num1*10+str[i]-'0';
		}
		else
			return -1;
		i++;
	}
	//cout<<num1<<endl;
	if(str[i]=='\0')
		return num1;
	i++;
	
	while(str[i]!='\0')
	{
		if(str[i]>='0' && str[i]<='9')
		{
			power++;
			num2=num2*10+str[i]-'0';
		}
		else
			return -1;
		i++;
	}
	//cout<<"ad"<<endl;
	return num1+num2/pow(10,power);
}

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	cout<<my_atoi(str)<<endl;
	return 0; 
} 
