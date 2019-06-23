#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(char &a, char &b)
{
	char tmp=a;
	a=b;
	b=tmp;
}

void permute(string str, int l, int r )
{
	int i,num,len;
	if(l==r)
	{	
		len=str.length();
		num=stoi(str);
		for(i=1;i<len;i++)
		{
			if(str[i]-str[i-1] == 1)
				return;
		}
		cout<<str<<endl;
	}
	for(i=l;i<r;i++)
	{
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}

int main()
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int len=str.length();
	permute(str,0,len);
	return 0;
}

