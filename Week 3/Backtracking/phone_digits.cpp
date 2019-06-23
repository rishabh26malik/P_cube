#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char str[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phone_digits(int *num, char *res, int n, int len)
{
	
	if(n==len)
	{
		res[n]='\0';
		cout<<res<<endl;
		return;
	}
	int limit=strlen(str[num[n]]);
	for(int i=0;i<limit;i++)
	{
		res[n]=str[num[n]][i];
		//cout<<"----------------"<<res<<endl;
		phone_digits(num,res,n+1,len);
	
	}	
}

int main()
{
	int k,i;
	cout<<"enter length : ";
	cin>>k;
	int num[k];
	cout<<"enter phone digits : ";
	for(i=0;i<k;i++)
		cin>>num[i];
	char res[k+1];
	res[k]='\0';
	phone_digits(num,res,0,k);
	return 0;
}

