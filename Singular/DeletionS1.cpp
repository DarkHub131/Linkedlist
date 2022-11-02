// Deletion of the head , specific index data,the last element. 
// Deletion with specific data
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
//Delete an element
//First Element
void delE1(node*& head)
{
    node *temp = head;
    head = head->next;
    free(temp);
}
//Specific Index
void delatIndex(node*head, int index)
{
    node *p = head;
    node *q = head->next;

    for (int i =0;i<index-1;i++)
   {
       p = p->next;
       q = q->next;
   }

   p->next = q->next;
   free(q);
}
//The last element 
void delatlast(node* head)
{
    node *p = head;
    node *q = head->next;

  while(q->next!=NULL)
   {
       p = p->next;
       q = q->next;
   }

   p->next =NULL;
   free(q);
}
//Specific data 
void deled(node* head, int key)
{
    node *p = head;
    node *q = head->next;

  while(q->data!=key)
   {
       p = p->next;
       q = q->next;
   }

   p->next = q->next;
   free(q);
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


    print(head);

    return 0;
}