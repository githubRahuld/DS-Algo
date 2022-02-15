#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout<<"Hello friends";
float arr[4] = {4.2,53,876,12};

float minNo = INT_MAX;
float maxNo = INT_MIN;

for(int i=0;i<4;i++){
    minNo = min(minNo,arr[i]);
    maxNo = max(maxNo,arr[i]);
}

cout<<"min number is: "<<minNo<<endl<<" max number is: "<<maxNo<<endl;

}
