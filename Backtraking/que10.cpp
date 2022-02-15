#include<iostream>
using namespace std;

int searching(int* arr,int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
   
     return -1;
}

int main()
{
    int n; 
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>n;
   

    //dynamic memory allocation in 1d array
    int* arr =  new int[n];

    //taking input
    cout<<"ENTER THE ELEMENTS OF ARRAY"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key; cin>>key;

    cout<<searching(arr,n,key);
}