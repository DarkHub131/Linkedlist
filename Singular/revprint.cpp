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

// A function to reverse a linked list
   node* reveprint(node* head)
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
   
     node* temp = head;

	while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
   }
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

    reveprint(head);

    return 0;
}