#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(char *a, char *b)
{
	char t=*a;
	*a=*b;
	*b=t;
}

int main() 
{
	string str;
	cout<<"enter string : ";
	cin>>str;
	int left=0,right=str.length()-1;
	while(left<right)
	{
		swap(&str[left],&str[right]);		

		left++;
		right--;
	}
	cout<<str<<endl;
	return 0; 
} 
