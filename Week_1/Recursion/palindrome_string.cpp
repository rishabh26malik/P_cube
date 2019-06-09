#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int palin(string str, int end, int start)
{
	if(start<end)
	{
		//b  cout<<start<<" "<<end<<endl;
		if(str[end]!=str[start])
			return 0;
		return palin(str,end-1,start+1);
	}
	return 1;
}


int main()
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int len=str.length();
	int check=palin(str, len-1,0);
	cout<<check<<endl;
	return 0;
}
