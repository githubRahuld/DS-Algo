#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n,int W){

    if(n==0 ||W==0){
        return 0;
    }
    if(wt[n-1]>W){
      return knapsack(value,wt,n-1,W);
    }
   //here two cases :(1) iteam is taken and (2)iteam in not taken and return maximum among them.
  return  max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
  //          iteam taken                                 not taken
}

int main()

{
  int value[] = {100,50,150}; 
  int wt[] = {15,20,30};
  int W =50; //total weight of knapsack
  cout<<knapsack(value,wt,3,W);
}