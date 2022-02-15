#include<iostream>
#include<stack>
using namespace std;

bool redundant(string s){

    bool ans =false;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*' or s[i]=='/' or s[i]=='+' or s[i]=='-'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){ 
            if(st.top()=='('){
                ans = true; //redendant braces exits
            }  
            while(st.top()=='*' or st.top()=='/' or st.top()=='+' or st.top()=='-'){
                st.pop();  
            }
            //pop openning braces  
            st.pop();  
        }
    }
    return ans;
}

int main()
{
    string s; cin>>s;
    cout<<redundant(s);
}