/*
"Winner Winner Chicken Dinner!"
If you haven't heard of the above line before, this means either of the one thing:
1. You never played PUBG, which is okay!
2. You are not even social to see it on social media, which is okay-ish too!
3. You never won a game in PUBG -_-
Sahil was a ruthless PUBG player. He used to play PUBG while preparing for GATE too (don't tell sir :P)
But his elder brother came to know about this and decided a punishment for him. The task for him was
simple, he was given an integer N. He could do one of the three given below:
1. If N is divisible by 2, replace it by N/2.
2. If N is divisible by 3, replace it by 2N/3.
3. If N is divisible by 5, replace it by 4N/5.

His task was to use any of the above operations and convert the nal N to 1. His task was also to
minimize the number of operations and report his brother about the steps taken to convert N to 1
using the minimum number of operations. He comes to ask for your help.

Constriants:
1<=T<=100
1<=N<=1000000000

Input:
The rst line of input contains a single integer T denoting the number of test cases. The description of T
test cases follows.
The only line of each test case contains a single integer N.

Output:
Print the number of steps required to convert N to 1, print -1 if this is not possible.

SAMPLE INPUT

1
10
6
25
30
14
27
7
1000000000

SAMPLE OUTPUT

0
4
6
6
-1
6
36

*/

#include <iostream>
using namespace std;
int main() {
  int t,c,flag;
  long int n;
  cin >> t;
  while(t--)// Reading input from STDIN
  {
    flag=1;
    cin>>n;
    c=0;
    while(n>1)
    {
      if(n%5==0){
        n=4*n/5;
        c++;
      }
      else if(n%3==0){
        n=(n/3)*2;
        c++;
      }
      else if(n%2==0){
        n=n/2;
        c++;
      }
      else
      {
        flag=0;
        cout<<"-1"<<endl;
        break;
      }
    }
    if(flag==1)
      cout<<c<<endl;
   }
   return 0;
}







