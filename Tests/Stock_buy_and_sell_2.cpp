/*
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.

Input Format

First line of each test case contains an integer value N denoting the number of days, followed by an array of stock prices of N days.

Constraints

1 <= T <= 100

2 <= N <= 103

0 <= Ai <= 104

Output Format

For each testcase, output all the days with profit in a single line. And if there is no profit then print "No Profit"

Sample Input 0

7
100 180 260 310 40 535 695
Sample Output 0

(0,3) (4,6)
Explanation 0

We can buy stock on day 0, and sell it on 3rd day, which will give us maximum profit.

Similar for purchasing on day 4 and selling on day 6

Submissions: 116
Max Score: 100

*/

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
