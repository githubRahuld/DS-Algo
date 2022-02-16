#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void dnf_sort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            low++; mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr,mid,high);
            high--;
        }
    }
   
}

int main()
{
    int arr[] = {1,2,0,0,1,2,1,0};
    dnf_sort(arr,8);

     for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}