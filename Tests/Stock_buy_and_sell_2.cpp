#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n,l=0,flag=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            continue;
        }
        else
        {
            flag=1;
            cout<<"("<<l<<","<<i<<") ";
            l=i+1;
        }
    }
    if(flag==0)
        cout<<"No profit";
    else
        cout<<"("<<l<<","<<i<<") ";
    return 0;
}
