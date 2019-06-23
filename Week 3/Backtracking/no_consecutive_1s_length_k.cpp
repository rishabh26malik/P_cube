#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void gstring(char *s, int present, int end)
{
	if(present == end)
	{
		cout<<s<<endl;
		return;
	}
	if(s[present-1]=='1')
	{
		s[present]='0';
		gstring(s,present+1,end);
	}
	else
	{
		s[present]='0';
		gstring(s,present+1,end);
		s[present]='1';
		gstring(s,present+1,end);
	}
}

int main()
{
	int k;
	cout<<"enter length : ";
	cin>>k;
	char str[k+1];
	str[k]='\0';
	str[0]='0';
	gstring(str,1,k);
	str[0]='1';
	gstring(str,1,k);
	return 0;
}

