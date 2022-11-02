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
 
void insertAtHead(node* &head, int val) {
 
    node* n = new node(val);
    n->next = head;
    if (head != NULL) {
        head->prev = n;
    }
 
    head = n;
}
 
void push(node* &head, int val) {
 
    if (head == NULL) {
        insertAtHead(head, val);
        return;
    }
 
    node* n = new node(val);
    node* temp = head;
 
    while (temp->next != NULL) {
        temp = temp->next;
    }
 
    temp->next = n;
    n->prev = temp;
 
}
 
void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void display2(node* head) {
    node* temp = head;
    
   while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;

}
 
int main() {
 
    node* head = NULL;
    push(head, 30);
    push(head, 40);
    push(head, 50);
    push(head, 60);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    display(head);
    display2(head);

    return 0;
}