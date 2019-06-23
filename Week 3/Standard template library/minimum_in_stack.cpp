#include<bits/stdc++.h>
#include<stack>
using namespace std;



void min_in_stack(stack <int> s)
{
	int min=INT_MAX;
	while(!s.empty())
	{
		if(min > s.top())
			min=s.top();
		s.pop();
	}
	cout<<"minimum in stack = "<<min<<endl;
	
}

int main()
{
	stack <int>s;
	int n,i,num;
	cout<<"enter n : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		s.push(num);
	}
	min_in_stack(s);
	return 0;
}
