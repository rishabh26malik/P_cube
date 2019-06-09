#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int recWrap(int noofchoc,int wrap)
{
	if(noofchoc<wrap)
		return 0;
	int newNo=noofchoc/wrap;
	return newNo + recWrap(newNo + noofchoc % wrap, wrap);
}

int maxChoc(int money, int price, int wrap)
{
	int no_of_choc=money/price;
	return no_of_choc + recWrap(no_of_choc,wrap);
}



int main()
{
	int money,price,wrap;
	cout<<"enter money, price, wrap : ";
	cin>>money>>price>>wrap;
	cout<<maxChoc(money,price,wrap)<<endl;
	return 0;
}
