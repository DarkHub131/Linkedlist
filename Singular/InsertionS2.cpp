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
// Add a node after a given node  of  linked list
void insertafter(node *prev_node, int val)
{

	if (prev_node == NULL)
	{
		cout << "The given previous node cannot be NULL";
		return;
	}

	node *new_node = new node(val);

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

// add specific at index

void specific(node *head, int data, int pos)
{
	node *p = head;
	node *q = head->next;
	node *n = new node(data);

	for (int i = 0; i < pos - 1; i++)
	{
		p = p->next;
		q = q->next;
	}

	p->next = n;
	n->next = q;

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
	
	insertafter(second, 500);
	specific(head, 200, 1);
	print(head);

	return 0;
}