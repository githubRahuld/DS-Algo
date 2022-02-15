#include<iostream>

#include<stack>
#include<vector>
using namespace std;

void prevSmaller(vector<int> a,int n){
    
    stack<int> st;
    vector<int> ans;

    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(st.top());
        }
        st.push(a[i]);
    }
    cout<<"Prevous Smaller: ";
    for(auto &i: ans){
        cout<<i<<" ";
    }cout<<endl;
}

void nextSmaller(vector<int> a,int n){
    stack<int> st;
    vector<int> ans;

    int i=n;
    while(i>0){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(st.top());
        }
        st.push(a[i]);
        i--;
    }
   // reverse(ans.begin(),ans.end());
    cout<<"Next Smaller: ";
    for(auto &i: ans){
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    
    prevSmaller(a,n);
    nextSmaller(a,n);
}