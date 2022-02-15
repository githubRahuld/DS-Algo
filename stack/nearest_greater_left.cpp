//nearest_greater_left
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void NGL(int arr[],int n){

    stack<int> st;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(st.empty()){
            ans.push_back(-1);
        }else if(!st.empty() && st.top()>arr[i]){
            ans.push_back(st.top());
        }
        else if(!st.empty() && st.top()<=arr[i]){  //st.top()>=arr[i]
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top());
            }
        }
        st.push(arr[i]);
    }    
    for(auto &i: ans){
        cout<<i<<" ";
    }
}

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NGL(arr,n);
}