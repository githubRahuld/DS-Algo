// max lenght in the sentance


#include<iostream>
#include<climits>

using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

   int i=0;
   int currLen=0;
   int maxLen = INT_MIN;
   int st=0,maxst=0;

  while(1){

      if(arr[i] == ' ' || arr[i] == '\0'){
          if(maxLen<currLen){
              maxLen = currLen;
              maxst = st; //maxst store the starting word of maxLen
          }
          currLen = 0;
           st = i+1;

      }
    
      currLen++;
      
      if(arr[i] == '\0'){
          break;
      }
      i++;
  }
  cout<<maxLen-1<<endl;
  for(int i=0;i<maxLen;i++){
      cout<<arr[i+maxst];
  }

}