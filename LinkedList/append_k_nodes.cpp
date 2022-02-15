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
int length(node* head){
    node* temp = head;
    int l = 0;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
node* kAppend(node* &head,int k){

    node* tail = head;
    node* newTail ;
    node* newHead ; 
    int l = length(head);
    
    //if k is greater than l
    k = k%l;
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}


//insertion
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    head = n;
}
void insertAtTail(node* &head,int val){

    if(head == NULL){
        insertAtHead(head,val);
        return ;
    }

    node* n = new node(val);
    
    node* temp = head;

    while(temp->next!=NULL){
         temp = temp->next;
    }
    temp->next = n;
}

//display
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
    int arr[]= {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<endl;
    node* newhead = kAppend(head,3);
    display(newhead);

    return 0;
}
