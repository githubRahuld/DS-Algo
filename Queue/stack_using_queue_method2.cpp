#include<bits/stdc++.h>

using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    stack(){
        N=0;
    }
    //in method 2 pop() funtion is expensive
    void pop(){
        if(q1.empty()){
            cout<<"no element to pop"<<endl;
            return;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void push(int val){
        q1.push(val);
        N++;
    }
    int top(){
        if(q1.empty()){
             cout<<"no element on top"<<endl;
             return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }
    int size(){
        return N;
    }
};
int main(){
    Stack st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
  //  st.push(4);

    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;

}