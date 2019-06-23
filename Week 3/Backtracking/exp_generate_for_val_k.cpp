#include<bits/stdc++.h>
#include<stack>
#include<iostream>
using namespace std;

char opr[]={'+','-','*','/'};


char postfix[1000];

int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
  
void infixToPostfix(string s) 
{ 
    stack<char> st; 
    st.push('N'); 
    int l = s.length(),k=0; 
    //string postfix; 
    char postfix[100];
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        postfix[k++]=s[i];
        //postfix+=s[i]; 
  
        else if(s[i] == '(') 
          	st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
                postfix[k++]=c;
                //postfix += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                postfix[k++]=c;
                //postfix += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 

    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
		postfix[k++]=c;
        //postfix += c; 
    } 
    postfix[k]=0;
    cout << postfix << endl; 
  
} 


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

void gstring(string exp, char *s, int start ,int n ,  int end)
{
	if(n==end)
	{
		infixToPostfix(s);
		//if(evaluatePostfix(postfix)==6) 
			cout<<s<<"    "<<postfix<<endl;
		return;
	}
	for(int i=0;i<4;i++)
	{
		s[start]=opr[i];
		s[start+1]=exp[n];
		gstring(exp,s,start+2,n+1,end);
	}
}

int main()
{
	int len;
	string exp;
	cout<<"enter string : ";
	cin>>exp;
	len=exp.length();
	char str[len*2];
	str[2*len-1]='\0';
	str[0]=exp[0];
	gstring(exp,str,1,1,len);
	return 0;
}

