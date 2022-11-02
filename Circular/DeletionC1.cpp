// Creation , travesal , insert at head , push

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
 
void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
 
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
 
    delete todelete;
}
 
void deletion(node* &head, int pos){
 
    if(pos==1){
        deleteAtHead(head);
        return;
    }
      node* temp=head;
      int count=1;
 
      while(count!=pos-1){
          temp=temp->next;
          count++;
      }
 
      node* todelete=temp->next;
      temp->next=temp->next->next;
 
      delete todelete;
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
 
    node* head , *s1 , *s2 , *s3 ;

    head = new node(5);
    s1 = new node(10);
    s2 = new node(15);
    s3 = new node(20);

    head->next = s1;
    s1->next = s2;
    s2->next = s3;
    s3->next = head;

  //  deleteAtHead(head);
    deletion(head, 3);

    display(head);

    return 0;
}