#include<iostream>
using namespace std;
int powerOf(int n,int p){
    if(p==0){
        return 1;
    }
    int prevPower = powerOf(n,p-1);
    return n * prevPower; 
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<powerOf(n,p)<<endl;
}