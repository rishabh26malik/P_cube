#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str,long_sub;
	cout<<"enter string : ";
	cin>>str;
	int j,i,len=str.length(),c;
	int count[26]={0},flag,k;
	int longest=0;
	char sub[len]; 
	for(i=0;i<len;i++)
	{
		c=0;
		for(k=0;k<26;k++)
			count[k]=0;
		for(j=i;j<len;j++)
		{	
			sub[c]=str[j];
			count[sub[c]-'a']++;
			c++;
			sub[c]=0;
			flag=1;
			//cout<<sub<<endl;
			for(k=0;k<26;k++)
			{
				if(count[k]>1)
					flag=0;
			}
			if(flag==1 && longest<c){
				longest=c;
				long_sub=sub;
				//cout<<sub<<endl;
	
			}
		}
	}
	cout<<long_sub<<endl;
	return 0; 
} 
