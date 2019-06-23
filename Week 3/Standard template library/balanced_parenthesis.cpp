#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;



bool balanced_parenthesis(string str)
{
	int len,i;
	char ch;
	stack <char>s;
	len=str.length();
	for(i=0;i<len;i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[' )
			s.push(str[i]);
		else
		{
			if(s.empty())
				return false;
			ch=s.top();
			s.pop();
			if(str[i]==']' && ch!='[')
				return false;
			else if(str[i]=='}' && ch!='{')
				return false;
			else if(str[i]==')' && ch!='(')
				return false;
			
		}
	}
	return true;
}

int main()
{
	string str;
	cin>>str;
	if(balanced_parenthesis(str))
		cout<<"balanced"<<endl;
	else
		cout<<"not balanced"<<endl;
	return 0;
}
