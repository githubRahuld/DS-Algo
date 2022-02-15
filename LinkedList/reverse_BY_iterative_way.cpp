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

//reverse linkedlist
node* reverse(node* &head){
    //make 3 pointers
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    while(currPtr!=NULL){
        nextPtr = currPtr->next; //iterater
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head ==NULL){
        head=n;
        return ;
   }

    node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<"NULL";
}
int main()
{
   node* head = NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   insertAtTail(head,5);
   insertAtTail(head,6);

   display(head);
   cout<<endl;
   node* newHead = reverse(head);
   display(newHead);


}