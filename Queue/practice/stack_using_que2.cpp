#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        N =0;
    }
    void pop(){
        if(q1.empty()){
            cout<<"Queue is empty"<<endl;
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
    void push(int x){
        q1.push(x);
        N++;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<st.size()<<endl;;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size();
}