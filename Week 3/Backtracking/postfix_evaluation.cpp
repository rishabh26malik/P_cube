#include<stack>
#include <iostream>  
#include <string.h>  
  
using namespace std; 
  
  
int evaluatePostfix(char* exp)  
{  
	stack <int> s;
    int i,len=strlen(exp);  
    for (i = 0; i<len ; i++)  
    {  
        if (isdigit(exp[i]))  
            s.push(exp[i]-'0');  
        else
        {  
            int val1 = s.top();
            s.pop();  
            int val2 = s.top();
            s.pop();  
            switch (exp[i])  
            {  
            case '+': s.push(val2+val1);break;  
            case '-': s.push(val2-val1);break;  
            case '*': s.push(val2*val1);break;  
            case '/': s.push(val2/val1);break; 
            }  
        }  
    }  
    return s.top();  
}  
  
int main()  
{  
    char exp[] = "231*+9-";  
    cout<<"postfix evaluation: "<< evaluatePostfix(exp);  
    return 0;  
}  
