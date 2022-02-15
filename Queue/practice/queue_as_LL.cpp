#include<iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;

     node(int val){
         data = val;
         next = NULL;
     }
};
class queue{
    node* front;
    node* back;
    
    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x); 
        if(front>back){
            cout<<"Queue is full"<<endl;
            return ;
        }

        if(front==NULL){
            front = n;
            back = n;
            return ;
        }
        back->next = n;
        back = n;
    }
    int pop(){
        if(front == NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        node* todelete = front;
        front = front->next;

        delete todelete;
    }
    bool isempty(){
        if(front ==NULL){
            return true;
        }
        return false;
    }
    int Top(){
        if(front ==NULL){
            return -1;
        }
        return front->data;
    }
};


int main()

{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(3);

    cout<<q.Top()<<endl;
    q.pop();
    cout<<q.Top()<<endl;
    q.pop();
    cout<<q.Top()<<endl;
    q.pop();
    cout<<q.Top()<<endl;
    q.pop();
    cout<<q.Top()<<endl;

    
    


}