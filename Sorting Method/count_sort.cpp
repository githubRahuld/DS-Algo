#include<iostream>
using namespace std;

void count(int arr[] ,int n)
{
    int k = arr[0];
    for(int i=0;i<n;i++){
        k = max(k,arr[i]);
    }
    int count[50] = {0} ; //we dont give k as size of array b/c we cant make it dynamic allocated
    for(int i=0;i<n;i++){
        count[arr[i]]++; 
    }
    for(int i=1;i<=k;i++){
        count[i] += count[i-1]; 
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i]; 
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
}
int main()

{
    int arr[] = {2,5,34,11,8,3,2,4,5};
    count(arr,9);
}