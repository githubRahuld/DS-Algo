#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

   bool check =false;
   for(int i=0;i<n;i++){
       if(arr[i] != arr[n-1-i]){
          check = true;
          cout<<"word is not palindrome"<<endl;
          break;
       }
   }
   if(check == false){
       cout<<"word is palindrome"<<endl;
   }

}