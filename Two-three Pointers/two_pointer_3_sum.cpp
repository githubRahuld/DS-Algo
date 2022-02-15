#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void three_sum(vector<int> a,int n,int target){

    bool found = false;
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        int lo = i+1 ,hi = n-1;
        while(lo<hi){
            int curr = a[i]+a[lo]+a[hi];
            if(curr == target ){
                found = true;
            }
            if(curr<target){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"Triplet found";
    }else{
        cout<<"Not found";
    }
}

int main()
{
    int n; cin>>n;
    int target; cin>>target;

    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }
    three_sum(a,n,target);
}
//output
// 6 -n
// 9 -target
// 3 5 91 3 12 3 -array
// Triplet found -output