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

void insertAtHead(node* &head,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return ;
    }

    node* temp = head;

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void deleteAtHead(node* &head){
    node* todelete = head;

    head = head->next; //right sift bt 1
    delete todelete;

}

void deletion(node* &head,int val){
    
    if(head == NULL){ //corner case
        return;
    }
    if(head->next == NULL){ //corner case (only single element is in linked list)
        deleteAtHead(head);
        return;
    }

    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
    }
    node* toDelete = temp->next; //storing value to be delete
    temp->next = temp->next->next; //linking

    delete toDelete; //deleting
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
  // deletion(head,3);
  deleteAtHead(head);
   cout<<endl;
    display(head);
}