// Insertion at after given node & specific position
#include <iostream>
#include <iomanip>
using namespace std;

class node
{
public:
	int data;
	node *next;
	node(int value)
	{
		data = value;
		next = NULL;
	}
};
// A function to print linked list
void print(node *&head)
{
	node *temp = head;

	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}

// add specific at index

node* specific(node *head,  int pos)
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
     node *p = head;
     node *q = head->next;
     
     for (int i = 0; i < pos - 1; i++)
     {
         p = p->next;
         q = q->next;
	}
    return q;
}

int main()
{

	node *head, *second, *third;

	head = new node(5);
	second = new node(10);
	third = new node(70);

	head->next = second;
	second->next = third;
	third->next = NULL;
    node *t = specific(head, 1);

    cout << t->data << endl;

    return 0;
}