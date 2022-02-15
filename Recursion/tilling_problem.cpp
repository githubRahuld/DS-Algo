#include<iostream>
using namespace std;

int tilingWays(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return tilingWays(n-1)+tilingWays(n-2); //horizontily or vertically
}

int main()
{
    cout<<tilingWays(5); //4 is no. of column
}