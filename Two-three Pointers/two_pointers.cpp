#include<iostream>
#include<vector>
using namespace std;

void two_pointer_sum(vector<int> arr ,int n ,int target){

    int  start = 0;
    int end = n-1;

    while(start<end){
        int currSum  =  arr[start] + arr[end];
        if(currSum == target ){
            cout<<start<<" "<<end<<endl;
            cout<<arr[start]<<" "<<arr[end]<<endl;
            break;
        }else if(currSum<target){
            start++;
        }
        else if(currSum > target){
            end--;
        }
        else
            cout<<"Sum not found"<<endl;
    }
}

int main()
{
    int n;cin>>n;
   
    vector<int> arr(n);
    for(auto &i: arr){
        cin>>i;
    }
    cout<<"enter target element"<<endl;
    int target; cin>>target;

    two_pointer_sum(arr,n,target);
}