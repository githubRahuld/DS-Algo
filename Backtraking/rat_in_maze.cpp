#include<iostream>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y] == 1){
        return true;
    }
    return false;
}

int rat_in_maze(int** arr,int x,int y,int n,int** solArr){

    if(x==n-1 && y==n-1){
        solArr[x][y] = 1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solArr[x][y] = 1;

        if(rat_in_maze(arr,x+1,y,n,solArr)){ //checking at right direction
            return true;
        }
        if(rat_in_maze(arr,x,y+1,n,solArr)){ //checking at downward direction
            return true;
        }
        solArr[x][y] = 0;   //backtracking
        return false;
    }
    return false;
}

int main()

{

    int n; cin>>n;
    //dynamic memory allocation for array
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    
    //solution array
    int** solArr = new int*[n];
    for(int i=0;i<n;i++){
        solArr[i] = new int[n];
        for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }

    if(rat_in_maze(arr,0,0,n,solArr)){
//if it returns true than output the solArr
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }
    }
}
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1 