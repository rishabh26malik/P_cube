#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void gstring(char *s, int start, int end)
{
	if(start==end)
	{
		s[start]='\0';
		cout<<s<<endl;
		return;
	}
	for(int i=1;i<=9;i++)
	{
		s[start]='0'+i;
		gstring(s,start+1,end);
	}
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

