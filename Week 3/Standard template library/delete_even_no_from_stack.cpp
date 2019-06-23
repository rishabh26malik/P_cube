#include<bits/stdc++.h>
#include<stack>
using namespace std;

void delete_even(stack <int> &s )
{
	stack <int> s1;
	int num;
	while(!s.empty())
	{
		num=s.top();
		if(num%2==1)
			s1.push(num);
		s.pop();
	}
	while(!s1.empty())
	{
		s.push(s1.top());
		s1.pop();
	}
}

int main()
{
	stack <int>s;
	int n;
	cout<<"enter numbers to insert in stack , -1 to stop : ";
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		s.push(n);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
