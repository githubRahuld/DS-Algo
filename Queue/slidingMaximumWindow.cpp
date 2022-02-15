 /*
#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<vector>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }
    deque<int> q;
    vector<int> ans;

    for(int i=0;i<k;i++){
        //deque elements should be in decreasing order
        while(!q.empty() && a[q.back()]< a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    //loop for remaining elements
    for(int i =k;i<n;i++){
        //checking for out of bound index
        if(q.front()==i-k){
            q.pop_front();
        }
        //again checking for the same condition
        while(!q.empty() && a[q.back()]<a[i]){
            q.pop_back();
        }   
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto &i:ans)
        cout<<i<<" ";

}
*/

#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    
    deque<int> q;
    vector<int> ans;

    for(int i=0;i<k;i++){
        //deque elements should be in decreasing order
        while(!q.empty() && a[q.back()]< a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);

    for(int i = k;i<n;i++){
        //checking for out of bound index
        if(q.front()==i-k){
            q.pop_front();
        }
        //again checking for the same condition
        while(!q.empty() and a[q.back()]<a[i]){
            q.pop_back();
        }   
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto &i:ans){
        cout<<i<<" ";
    }
}