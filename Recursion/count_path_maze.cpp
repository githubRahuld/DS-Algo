#include<iostream>
using namespace std;

//maze can move in right direction and in downward  direction
int countPathMaze(int n,int i,int j){ //i and j are iterators

    if(i==n-1 && j==n-1){ 
        return 1;
    }
    if(i>n-1 || j>n-1){
        return 0;
    }
    return countPathMaze(n,i+1,j) + countPathMaze(3,i,j+1); //we have to find total path so we add them
}

int main()
{
    cout<<countPathMaze(3,0,0); 
}