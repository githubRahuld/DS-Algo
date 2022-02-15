#include<iostream>
using namespace std;

#define n 20
class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){
        if(back == n-1 ){
            cout<<"Queue overflow"<<endl;
            return ;
        }else{
            back++;
            arr[back] = x;

            if(front == -1){
                front++;
            }
        }
    }
    int peek(){
        if(front == -1 && front>back){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    void pop(){
        if(front == -1 || front>back){
            cout<<"No element in queue"<<endl;
            return ;
        }
        else{
            front++;
        }
    }
    bool empty(){
        if(front == -1 || front>back){
            return true;
        }
        return false;
    }
    void display(){
        
        if(front ==-1){
            cout<<"Queue is empty"<<endl;
            return ;
        }
        for(int i=front;i<=back;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.display();
   // cout<<q.peek()<<endl;
    q.pop();

   // cout<<q.peek()<<endl;
    q.pop();

   // cout<<q.peek()<<endl;
    q.pop();

  //  cout<<q.peek()<<endl;
    q.pop();

   // cout<<q.empty()<<endl;
}