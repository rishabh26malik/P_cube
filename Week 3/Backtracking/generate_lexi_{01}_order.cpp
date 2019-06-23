#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void gstring(char *s, int start, int end)
{
	if(start==end)
	{
		cout<<s<<endl;
		return;
	}
	s[start]='0';
	gstring(s,start+1,end);
	s[start]='1';
	gstring(s,start+1,end);
}

int main()
{
	int k;
	cout<<"enter length : ";
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,0,k);
	return 0;
}

