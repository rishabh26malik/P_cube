#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void gstring(char *s, int k)
{
	if(k==-1)
	{
		cout<<s<<endl;
		return;
	}
	s[k]='0';
	gstring(s,k-1);
	s[k]='1';
	gstring(s,k-1);
}

int main()
{
	int k,len;
	string num;
	cout<<"enter length : ";
	cin>>k;
	cout<<"enter number : ";
	cin>>num;
	len=num.length();
	char str[];
	str[k]='\0';
	gstring(str,k-1);
	return 0;
}

