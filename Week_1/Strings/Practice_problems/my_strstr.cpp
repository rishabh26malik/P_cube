#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	int i,len_search,len,j,flag=0;
	string str,search;
	cout<<"enter string and searching patern : ";
	cin>>str>>search;
	len=str.length();
	len_search=search.length();
	for(i=0;i<=len-len_search;i++)
	{
		if(str[i]==search[0])
		{
			flag=1;
			for(j=1;j<len_search;j++)
			{
				if(str[i+j]!=search[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				cout<<"found at "<<i<<endl;	
				break;
			}
		}
	}
	if(!flag)
		cout<<"not found"<<endl;
	return 0; 
} 
