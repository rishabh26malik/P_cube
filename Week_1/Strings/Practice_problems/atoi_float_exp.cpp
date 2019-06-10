#include<bits/stdc++.h>
#include<iostream>
using namespace std;

float my_atoi(string str)
{
	int i=0,num1=0,power=0,sign=1;
	float num2=0;
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
	
	while(str[i]!='\0' && str[i]!='e')
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

	num2=num1+num2/pow(10,power);
	if(str[i]=='\0')
		return num2;
	
	power=0;
	if(str[i]=='e' && (str[i+1]=='-' || str[i+1]=='+'))
	{
		if(str[i+1]=='-')
			sign=-1;

		i+=2;
		power=0;
		while(str[i]!='\0')
		{
			if(str[i]>='0' && str[i]<='9')
			{
				
				power=power*10+str[i]-'0';
			}
			else
				return -1;
			i++;
		}
	}

	return num2*pow(10,power*sign);
}

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	cout<<my_atoi(str)<<endl;
	return 0; 
} 
