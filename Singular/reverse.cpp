// A program to reverse a  singly linked list
#include<iostream>
#include<iomanip>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int value)
	{
		data = value;
		next = NULL;
	}
};
//A function to print linked list
void print(node*& head)
{
	node* temp = head;

	while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
	}
		
}
// A function to reverse a  singly linked list
   node* reverse(node* head)
   {
       node *current = head;
       node *prev = NULL;
       node *next = NULL;

     while(current!=NULL)
     {
         next = current->next;
         current->next = prev;
         prev = current;
         current = next;
     }
     head = prev;
     return head;
   }


int main()
{

    node *head, *second , *third , *fourth;

    head = new node(5);
    second = new node(10);
    third = new node(70);
    fourth = new node(80);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

   head = reverse(head);
    print(head);

    return 0;
}