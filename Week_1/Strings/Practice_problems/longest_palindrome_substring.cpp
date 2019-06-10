#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	string str,long_pal;
	cout<<"enter string : ";
	cin>>str;
	int j,i,len=str.length(),c,longest=0;
	int left,right,flag;
	char sub[len]; 
	for(i=0;i<len;i++)
	{
		c=0;
		for(j=i;j<len;j++)
		{
			sub[c]=str[j];
			c++;
			sub[c]=0;
			left=0;
			right=c-1;
			flag=1;
			while(left<right)
			{
				if(sub[left]!=sub[right])
				{
					flag=0;
				}
				left++;
				right--;
			}
			if(flag==1 && longest<c)
			{
				longest=c-1;
				long_pal=sub;
			}
			//cout<<sub<<endl;
		}
	}
	cout<<long_pal<<endl;
	return 0; 
} 
