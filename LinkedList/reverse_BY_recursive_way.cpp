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
void deletion(node* &head,int key){

    if(head==NULL){
        return ;
    }
    if(head->next == NULL){
        node* todelete = head;
        head = head->next;
    }
    node* temp = head;
    while(temp->next->data!=key){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

}
//reverse linkedlist recursive way
node* reverseRecursive(node* &head){

    if(head == NULL ||head->next == NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);

    head->next->next = head;
    head->next= NULL;

    return newhead;
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
   //node* newHead = reverseRecursive(head);
   //display(newHead);

   deletion(head,1);
   display(head);


}