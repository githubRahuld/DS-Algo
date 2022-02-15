#include "bits/stdc++.h"
using namespace std;
bool pairSum(int arr[],int n,int key){
    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high] == key){
          cout<<low<<" "<<high<<endl;
          return 1;
          break;
        }
        else if(arr[low]+arr[high] > key){
            high--;
        }
        else{
            low++;
       }
    }
    return false;
}
int main()
{
    //array should be shorted in this method
   int arr[] = {2,4,7,11,14,16,20,21};
   int key = 32;
   

   
   pairSum(arr,8,key);

   return 0;
   
}