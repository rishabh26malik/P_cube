#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool compare(stack <int> s1, stack <int> s2 )
{
	if(s1.size()!=s2.size())
		return false;
	while(!s1.empty())
	{
		if(s1.top()!=s2.top())
			return false;
		s1.pop();
		s2.pop();
	}	
	return true;
}

int main()
{
	stack <int>s1;
	stack <int>s2;
	int n,i,num;
	cout<<"enter numbers to insert in stack 1, -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		s1.push(n);
	}
	
	cout<<"enter numbers to insert in stack 2 , -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		s2.push(n);
	}
	if(compare(s1,s2))
		cout<<"same"<<endl;
	else
		cout<<"not same"<<endl;
	return 0;
}
