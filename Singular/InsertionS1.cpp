// Insertion with data at specific position

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
		if (temp == NULL)
		{
			return;
		}
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
    third->next = NULL;
	


    
    print(head);

    return 0;
}