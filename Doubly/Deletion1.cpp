#include<iostream>
using namespace std;
 
class node {
public:
    int data;
    node* next;
    node* prev;
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
 
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
 
void deleteAtHead(node* &head) {
 
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
 
    delete todelete;
}
 
void deletion(node* &head, int pos) {
 
    if (pos == 1) {
        deleteAtHead(head);
        return;
    }
 
    node* temp = head;
    int count = 1;
 
    while (temp != NULL && count != pos) {
        temp = temp->next;
        count++;
    }
 
    temp->prev->next = temp->next;
 
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
 
 
    delete temp;
 
}
 
int main() {
 
  node* head , *n1 , *n2, *n3;

    head = new node(40);
    n1 = new node(50);
    n2 = new node(60);
    n3 = new node(70);

    head->next = n1;
    n1->prev = head;
    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = NULL;
    display(head);
    deletion(head, 1);
    display(head);
 
 
    return 0;
}