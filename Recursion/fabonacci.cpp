//to find nth fibonacci
#include<iostream>
using namespace std;
int fab(int n){
    if(n == 0 ||n == 1){
        return n;
    }
    int prevFab = fab(n-1)+fab(n-2);
    return prevFab;
}

int main()
{
    int n;
    cin>>n;

    cout<<fab(n);
}