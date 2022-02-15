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

void insertAtHead(node* &head,int val){  //referance

    node* n = new node(val); //creating new node

    if(head == NULL){
        head = n;
        return ;
    }

    node* temp = head; //iterator
    while(temp->next!=NULL){
        temp = temp->next;
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
   insertAtHead(head,1);
   insertAtHead(head,2);
   insertAtHead(head,3);
   insertAtHead(head,4);
   insertAtHead(head,5);
   insertAtHead(head,23);

   display(head);

}