#include "bits/stdc++.h"
using namespace std;
int main(){

    int n,m; cin>>n>>m;
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    bool flag = false;
    int arr[n][m];
    for (int  i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    



    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == k){
               cout<<i<<" "<<j<<endl;
               flag = true;
               break;
            }
        }
    }
    if(flag == false){
        cout<<"No match found"<<endl;
    }

}