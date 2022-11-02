// insert at head , push

#include<iostream>
using namespace std;
 
class node{
 
    public:
    int data;
    node* next;
 
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n=new node(val);
 
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
 
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
 
void push(node* &head, int val){
 
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
 
    node* n = new node(val);
    node* temp=head;
 
    while(temp->next!=head){
        temp=temp->next;
    }
 
    temp->next=n;
    n->next=head;
}

void display(node* head){
 
 
    node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
    
}
 
 
int main(){

    node *head = NULL;
    push(head, 50);
    push(head, 60);
    push(head, 70);
    push(head, 80);
    push(head, 90);
    push(head, 100);
    insertAtHead(head, 40);
    display(head);

    return 0;
}