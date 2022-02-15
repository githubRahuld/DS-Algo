#include<iostream>
#include<stack>
#include<vector>

void left(int arr[],int n){

    vector<int> left;
    stack<pair<int,int>> s;
    int psuedo = -1;

    for(int i=0;i<n;i++){
        if(s.size()==0){
            left.push_back(psuedo);
        }
        else if(s.size()>0 && s.top().first()<arr[i]){
            left.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first()>=arr[i]) {
            while(s.size()>0 && s.top().first()>=arr[i])
            {
                s.pop();
            }
            if(s.size()==0){
                left.push_back(psuedo);
            }else{
                left.push_back(s.top().second);
            }
        }
        s.push(arr[i]);
    }
    return left;
}
void right(int arr[],int n){

    vector<int> right;
    stack<pair<int,int>> s;
    int psuedo = n;

    for(int i=n-1;i>=0;i--){
        if(s.size()==0){
            right.push_back(psuedo);
        }
        else if(s.size()>0 && s.top().first()<arr[i]){
            right.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first()>=arr[i]) {
            while(s.size()>0 && s.top().first()>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                right.push_back(psuedo);
            }else{
                right.push_back(s.top().second);
            }
        }
        s.push(arr[i]);
    }
    reverse(right);
    return right;
}
int MHA(int arr[],int n){
    int width[n];
    for(int i=0;i<n;i++){
        width[i] = right[i]-left[i]-1;
    }
    int ans[n]={0};
    for(int i=0;i<n;i++){
        ans[i] = arr[i]*width[i];
    }
    int ans;
    for(int i=0;i<n;i++){
        ans = max(ans,arr[i]);
    }
    return ans;
}


using namespace std;
int main()
{
    int n=7;
    int arr[n] = {};
    
    cout<<MHA(arr,n);
}