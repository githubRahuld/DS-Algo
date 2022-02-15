#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> a,int n,int k){
    
    int start =0 , end = 0;
    int maxSum = 0;
    int windowSum =0;

    while(end<k){
        windowSum += a[end++];
    }

    while(end<n){
        windowSum += a[end++] - a[start++];
        maxSum = max(maxSum,windowSum);
    }
    return maxSum;
}

int main(){
    int n;cin>>n;
    int k =4;

    vector<int> a(n);
    for(auto &i :a)
        cin>>i;
    
    cout<<sum(a,n,k);
}