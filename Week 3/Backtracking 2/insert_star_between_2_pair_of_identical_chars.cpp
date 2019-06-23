#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insertStar(string str, char *out, int input_idx , int out_idx, int len )
{
	if(input_idx==len)
	{
		cout<<out<<endl;
		return;
	}
	
	if(str[input_idx] == str[input_idx+1])
	{
		out[out_idx+1]='*';
		out[out_idx]=str[input_idx];
		out[out_idx+2]='\0';
		insertStar(str,out,input_idx+1,out_idx+2,len);
	}
	else
	{
		out[out_idx]=str[input_idx];
		out[out_idx+1]='\0';
		insertStar(str,out,input_idx+1,out_idx+1,len);
	}
}


int main()
{
	string str;
	int len;
	cout<<"enter string : ";
	cin>>str;
	len=str.length();
	char out[len+1];
	insertStar(str,out,0,0,len);
	return 0;
}

