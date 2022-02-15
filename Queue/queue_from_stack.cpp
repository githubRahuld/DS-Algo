#include<iostream>
#include<stack>
using namespace std;

//By using 2 stack
/*class queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
        return ;
    }
    int pop(){
        if(s1.empty() && s2.empty()){ //condition 1
            cout<<"queue is empty"<<endl;
            return -1;

        }else{      //condition 2
            if(s2.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topvalue = s2.top();
            s2.pop();
            return topvalue;
        }
    }
    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
};
*/
//using call back stack
class queue{
    stack<int> s1;
    public:

    void push(int x){
        s1.push(x);
        return;
    }
    int pop(){
         if(s1.empty()){ //condition 1
            cout<<"queue is empty"<<endl;
            return -1;
        }
        //if only 1 element is present in stack
        int x = s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        //if more than 1 element is present
        int item  = pop();
        s1.push(x);
        return item;
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(18);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;

}