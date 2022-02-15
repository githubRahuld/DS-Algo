#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    //checking in column
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    // checking in upward left diagonal
    int row = x;
    int col = y;

    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

     // checking in upward right diagonal
     row = x;
     col = y;

    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    //else return true
    return true;
}
bool nQueen(int** arr,int x,int n){//no need of y

    if(x>=n){ //this means we place all queens
        return true;
    }
    //checking in row
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col] = 1;
            
            //checking for next row
            if(nQueen(arr,x+1,n)){
                return true;
            }
            arr[x][col]=0; //backtracking
        }
    }
    return false; //if we dont able to place queen in any column so we return false
}

int main()
{
    int n; cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
        for(int j=0;j<n;j++){
            arr[i][j] = 0;
        }
    }

    if(nQueen(arr,0,n)){
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
      }
    }
}