#include<iostream>
using namespace std;

void towerOfHanoi(int n,char src,char des,char helper){

    if(n == 0){
        return ;  //base case
    }

    towerOfHanoi(n-1,src,helper,des);
    cout<<"move from "<<src<<" to "<<des<<endl;
    towerOfHanoi(n-1,helper,des,src);
}

int main()
{
    towerOfHanoi(3,'A','C','B');
}