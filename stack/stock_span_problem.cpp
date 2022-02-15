#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stock_span(int arr[],int n){
    //we push pair in stack first is NGL(nearest greater left) and second is index of NGL
    stack<pair<int,int>> st;
    vector<int> ans;

    for(int i=0;i<n;i++){
        if(st.empty()){
            ans.push_back(-1);
        }else if(!st.empty() && st.top().first>arr[i]){
            ans.push_back(st.top().second);
        }
        else if(!st.empty() && st.top().first<=arr[i]){  //st.top()>=arr[i]
            while(!st.empty() && st.top().first<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(st.top().second);
            }
        }
        st.push(make_pair(arr[i],i));
    }
    for(int i=0;i<n;i++){
        ans[i] = i-ans[i];
    }  
    //return ans;  
    for(auto &i: ans){
        cout<<i<<" ";
    }
}

int main()
{
    int n ;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stock_span(arr,n);
}