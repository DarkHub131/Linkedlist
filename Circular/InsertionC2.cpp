// Insertion after given node
//Insertion with given data
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
void print(node*&head)
{
	node* temp = head;

	do {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != head);
}

//Add a node after a given node  of  linked list
void insertAfter(node* prev_node, int val)
{
	node* new_node = new node(val);

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

// Function to insert an element at specific position
void insertafter(node *head, int key, int val)
{
	node *n = new node(val);
	if (key == head->data)
	{
		n->next = head->next;
		head->next = n;
		return;
	}

	node *temp = head;
	while (temp->data != key)
	{
		temp = temp->next;
		
	}
	n->next = temp->next;
	temp->next = n;
}

int main()
{

    node *head, *second , *third;

    head = new node(5);
    second = new node(10);
    third = new node(70);

    head->next = second;
    second->next = third;
    third->next = head;

	insertAfter(head, 20);
	print(head);

	return 0;
}