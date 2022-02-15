#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int key;
    cin>>key;

    int mat[n][m];
    cout<<"Enter elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool flag =false;
    int r=0, c=m-1;
    while(r<n && c>=0){
        if(mat[r][c] == key){
           flag= true;
           cout<<"element found at "<<r<<","<<c<<endl;
           break;
        }else if(mat[r][c]>key){
            c--;
        }else{
            r++;
        }
    }
    if(flag == false){
        cout<<"element not found"<<endl;
    }
}