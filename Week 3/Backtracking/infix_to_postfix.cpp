#include<bits/stdc++.h> 
using namespace std; 
  

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
    //string ns; 
    char ns[100];
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        ns[k++]=s[i];
        //ns+=s[i]; 
  
        else if(s[i] == '(') 
          	st.push('('); 
          
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
                ns[k++]=c;
                //ns += c; 
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
                ns[k++]=c;
                //ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 

    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
		ns[k++]=c;
        //ns += c; 
    } 
      ns[k]=0;
    cout << ns << endl; 
  
} 
  
int main() 
{ 
    string exp = "a+b+c";//"a+b*(c^d-e)^(f+g*h)-i"; 
    infixToPostfix(exp); 
    return 0; 
} 
