
#//include<bits/std++.h>
#include<iostream>
using namespace std;

int main() 
{
	char term_part1='A',term_part2='Z';
	int n,k=0,k2=0;
	cout<<"enter n : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<char(term_part1+k)<<char(term_part2-k2)<<" ";
		k+=2;
		k2++;
	}

	return 0;
}
