#include<string>
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
	int i,n=0,len,j,wt=0;
	string binary;
	cout<<"enter binary no. : ";
	cin>>binary;
	len=binary.length();
	if(binary[len-1]=='0')
		n=0;
	else
		n=1;
	for(i=0;i<len && binary[i]=='0';i++);
	wt=2;
	for(j=len-2;j>=i;j--)
	{
		if(binary[j]=='1')
			n+=wt;			
		wt*=2;
	}
	cout<<n<<endl;
	return 0; 
} 
