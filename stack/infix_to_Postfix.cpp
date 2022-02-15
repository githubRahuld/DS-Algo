#include<iostream>
#include<stack>
using namespace std;

//precedence table
int prec(char c){
    if(c == '^'){
        return 3;   
    }
    if(c == '*' || c == '/'){
        return 2;
    }
    if(c == '+' || c == '-'){
        return 1;
    }
    else{ // for brackets
        return -1;
    }
}

string prefixToPostfix(string s){

    stack<char> st;
    string res;

    for(int i=0;i<=s.length();i++)  //from starting
    {
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop(); //pop starting braces
            }
        }
        else{
            while(!st.empty() && prec(st.top())>prec(s[i])){ //for operator
                  res+=st.top();
                  st.pop();
            } 
            st.push(s[i]);
        }

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
        return res;
}

int main()
{
   //string s = "(a-b/c)*(a/k-l)";
   string s = "a+(b*c-(d/e^f)*g)*h";
   cout<<prefixToPostfix(s);
}
