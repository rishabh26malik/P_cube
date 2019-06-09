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
