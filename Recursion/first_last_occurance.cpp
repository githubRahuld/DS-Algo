#include<iostream>
using namespace std;

int lastocc(int arr[],int n,int i,int key){

    if(i==n){
    return -1;
}

    int restArr = lastocc(arr,n,i+1,key);
    if(restArr != -1){
       return restArr;
   }
   if(arr[i] == key){
       cout<<"last occ: ";
       return i;
   }
   return -1;
}

int firstocc(int arr[],int n,int i,int key){
if(i==n){
    return -1;
}

   if(arr[i] == key){
       cout<<"first occ: ";
       return i;
   }
   return firstocc(arr,n,i+1,key);
}

int main()
{
    int key;
    cin>>key;
    int arr[] ={2,4,10,7,4,2,7};

    cout<<firstocc(arr,7,0,key)<<endl;
    cout<<lastocc(arr,7,0,key);
}