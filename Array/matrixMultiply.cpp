#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    int m1[n1][n2];
    cout<<"enter n1 and n2: ";
    cin>>n1>>n2;

    cout<<"enter n2 and n3: ";
    cin>>n2>>n3;
    int m2[n2][n3];

    cout<<"Enter elements of m1 matrix: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    
    cout<<"Enter elements of m2 matrix: ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    //creating ans matrix
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j] = 0 ;
         }
    }
     
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                 ans[i][j] += m1[i][k]*m2[k][j] ;
            }
         }
    }
    //printing ans matix
     for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}