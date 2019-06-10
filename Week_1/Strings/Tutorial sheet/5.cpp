#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int left=0,right=str.length()-1;
	while(left<right)
	{
		if(str[left]!=str[right])
		{
			cout<<"no"<<endl;
			return 0;
		}
		left++;
		right--;
	}
	cout<<"yes"<<endl;
	return 0; 
} 
