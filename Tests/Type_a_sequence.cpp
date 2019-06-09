/*
Imagine a mobile keypad configuration just like one given below

1 2 3
4 5 6
7 8 9
Standing on a number or a button, it takes 0 seconds for the button to be pressed. It takes 2 seconds to traverse to all the adjacent buttons and 4 seconds to move the control to all the buttons next to the adjacent ones. For example, suppose we are currently standing on digit 1, now time taken to move the control to buttons

2   ->  2 sec
5   ->  2 sec
4   ->  2 sec
3   ->  4 sec
6   ->  4 sec
9   ->  4 sec
8   ->  4 sec
7   ->  4 sec
Another example, suppose we are currently standing on button 5, now time taken to move the control to any one of the button is 2 seconds each.

Given an nine digit configuration of the keypad and a sequence of integers, find the total time to type the given sequence.

Input Format

The question contains a two line input. The first line contains two integers, first integer denotes an nine digit keypad configuration K and second integer N denotes the number of digits to be typed using the keypad. The second line contains N space separated single digit integers

Constraints

K is an integer of nine digits from 1 - 9 1<= N <= 100000 1<= A[i] <= 9

Output Format

The time taken to type the given sequence.

Sample Input 0

234719658 5
1 8 2 4 6
Sample Output 0

14
Explanation 0

We currently stand on key 1
Time to press key 1 = 0s
Move from 1 to 8 = 2s
Time to press key 8 = 0s
Move from 8 to 2 = 4s
Time to press key 2 = 0s
Move from 2 to 4 = 4s
Time to press key 4 = 0s
Move from 4 to 6 = 4s
Time to press key 6 = 0s
Total time = 14 seconds

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void pos(int **a,int n, int &x, int &y)
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(n==a[i][j])
            {
            
                x=i;
                y=j;
                return;
            }
        }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int **a;
    int pat,n,t,sum=0,x,y,x1,x2,y1,y2,i,j;
    float dist;
    a=(int**)malloc(sizeof(int*)*3);
    for(i=0;i<3;i++)
        a[i]=(int*)malloc(sizeof(int)*3);
    cin>>pat>>n;
    int c[n];
    t=pat;
    for(i=2;i>=0;i--)
        for(j=2;j>=0;j--){
            a[i][j]=t%10;
            t=t/10;
        }
    for(i=0;i<n;i++)
        cin>>c[i];
    for(i=1;i<n;i++)
    {
        pos(a,c[i],x,y);
        x1=x;
        y1=y;
        pos(a,c[i-1],x,y);
        x2=x;
        y2=y;
    //cout<<x1<<","<<y1<<"     "<<x1<<","<<y2<<"    "; 
        dist=(pow((x1-x2),2)+pow((y1-y2),2));
        if(dist==0)
            sum+=0;
        
        else if(dist==1 || dist==2)
            sum+=2;
        else if (dist==4 || dist==5 || dist==8)///if(dist==2.23607 || dist==2)
            sum+=4;
        //else if(dist==0)
          //  sum+=0;
        //else sum+=4;
       
    }
    cout<<sum;
    return 0;
}
