#include "bits/stdc++.h"
using namespace std;
int kedane(int arr[] , int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){

        currSum += arr[i];
        if(currSum <0){
            currSum = 0;
        }
        maxSum = max(maxSum , currSum);
    }
    return maxSum;
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int nonWrapSum;
    int wrapSum;

    nonWrapSum = kedane(arr,n); //non wrap sum
    
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i]; 
    }
    //after this loop array elemets become -ve 
    
    //maxSum = totalSum - sum of non contributing elements
    wrapSum= totalSum + kedane(arr,n);

   int maxSum = max(wrapSum , nonWrapSum);
   cout<<"ans is: "<<maxSum<<endl;
   return 0;
}