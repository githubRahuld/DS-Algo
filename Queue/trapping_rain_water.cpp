#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int trapping_rain_water(int arr[],int n){

    //create two temp array which store left and right maximum of given array
    int left[n];
    int right[n];

    left[0]=arr[0]; 
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>0;i--){
        right[i] = max(right[i+1],arr[i]);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        //formula to find space to store water
        ans += min(right[i],left[i])-arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trapping_rain_water(arr,n);
}