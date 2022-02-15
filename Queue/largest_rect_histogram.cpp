#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

vector<int> prevSmaller(vector<int> a,int n){
    
    stack<int> st;
    vector<int> ps;

    for(int i=0;i<n;i++){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()){
            ps.push_back(-1);
        }else{
            ps.push_back(st.top());
        }
        st.push(i);
    }
    cout<<"Prevous Smaller: ";
    for(auto &i: ps){
        cout<<i<<" ";
    }cout<<endl;
    return ps;
}

vector<int> nextSmaller(vector<int> a,int n){
    stack<int> st;
    vector<int> ns;

    int i=n;
    while(i>0){
        while(!st.empty() && st.top()>=a[i]){
            st.pop();
        }
        if(st.empty()){
            ns.push_back(-1);
        }else{
            ns.push_back(st.top());
        }
        st.push(i);
        i--;
    }
    return ns;
    reverse(ns.begin(),ns.end());
    // cout<<"Next Smaller: ";
    // for(auto &i: ans){
    //     cout<<i<<" ";
    // }
}
int LAH(vector<int> a,int n){
    int maxAns = 0;
    vector<int> ps = prevSmaller(a,n);
    vector<int> ns = nextSmaller(a,n);

    for(int i=0;i<n;i++){
        int curr= (ns[i]-ps[i]-1)*a[i];
        maxAns = max(maxAns,curr);
    }
    return maxAns;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    
    cout<<LAH(a,n);
}