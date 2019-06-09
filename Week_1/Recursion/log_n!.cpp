#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
float calLog(int n)
{
	if(n==0)
		return 0;
	return calLog(n-1)+log(n);
}


int main()
{
	int n;
	cout<<"enter number : ";
	cin>>n;
	cout<<calLog(n)<<endl;
	return 0;
}
