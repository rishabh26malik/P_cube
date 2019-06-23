#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void gstring(string exp, char *s, int start ,int n ,  int end)
{
	if(n==end)
	{
		cout<<s<<endl;
		return;
	}
	s[start]='+';
	s[start+1]=exp[n];
	gstring(exp,s,start+2,n+1,end);
	s[start]='-';
	s[start+1]=exp[n];
	gstring(exp,s,start+2,n+1,end);
}

int main()
{
	int len;
	string exp;
	cout<<"enter string : ";
	cin>>exp;
	len=exp.length();
	char str[len*2];
	str[2*len-1]='\0';
	str[0]=exp[0];
	gstring(exp,str,1,1,len);
	return 0;
}

