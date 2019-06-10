/*
Problem looks so big,
The memory given is so small.
Use your brain a little,
Don't spend all the time and just scroll.
Sahil loves to play around with numbers. These problems at times can be tricky to crack. He faces one
such problem today and needs your help to crack the problem. He is given a very large number. Now
you got to test this number for three properties:
a. Is this number divisible by unity
b. Is this number divisible by itself
c. Is this number divisible by none other that the numbers above.
Test each number for the given properties.

Constraints:
1<=T<=100000
1<=N<=100000000

Input:
The rst line of input contains a single integer T denoting the number of test cases. The description of T
test cases follows.
The only line of each test case contains a single integer N.

Output:
Output Yes if the above properties satisfy and No if any of the property fails.

SAMPLE INPUT
4
10
3
2
9

SAMPLE OUTPUT
No
Yes
Yes
No
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t,num,i,limit,flag=0;
  cin >> t;
  while(t--){// Reading input from STDIN
    cin>>num;
    flag=0;
    limit=sqrt(num);
    for(i=2;i<=limit;i++)
    {
      if(num%i==0)
      {
        flag=1;
        cout<<"No"<<endl;
        break;
      }
    }
    if(flag==0)
    cout<<"Yes"<<endl;
  }
  return 0;
}
