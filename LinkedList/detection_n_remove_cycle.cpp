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
//remove cycle
void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow!=fast);

    fast = head;
    while(slow->next!=fast->next){

        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;

}


//make cycle
void makeCycle(node* &head,int pos){

    node* temp = head;
    int count = 0;
    node* startnode;

    while(temp->next!=NULL){
        if(count==pos){
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

//detect cycle
bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
        return true;
       }
    }
    return false;
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
    insertAtTail(head,7);

    display(head);
    cout<<endl;
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head);

}