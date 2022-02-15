#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){//if 1 element left in the array it means array is shorted
       return true;
    }
    bool restArr = sorted(arr+1, n-1);

    if(arr[0]<arr[1] && restArr){
        return true;
    }
    return 0;
}

int main()
{
    
    int arr[] = {1,2,3,4,5};
    
    cout<<sorted(arr,5);

}