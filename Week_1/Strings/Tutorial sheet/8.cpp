#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str,longest;
	int length=-1,flag=0;
	cout<<"enter string : ";
	cin>>str;
	int j,i,len=str.length(),c;
	char sub[len]; 
	for(i=0;i<len;i++)
	{
		c=0;
		if(str[i]>='0' && str[i]<='9')
		{
			for(j=i;str[j]>='0' && str[j]<='9';j++)
			{
				sub[c]=str[j];
				c++;
				sub[c]=0;
				//cout<<sub<<endl;
				if(length<c)
				{
					flag=1;
					longest=sub;
					length=c;
				}
			}
			
		}
		
	}
	if(flag==1)
		cout<<longest<<endl;
	else
		cout<<"no numeric substring"<<endl;
	
	return 0; 
} 
