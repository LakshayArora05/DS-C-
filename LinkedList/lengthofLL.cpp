#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class node {
public:
	int data;
	node* next;
};

node *head=NULL;

/* Given a reference (pointer to pointer) to the head
of a list and an int, push a new node on the front
of the list. */
void insertbeg(int d){
    
    node *lux= new node();
    lux->data=d;
    lux->next=head;
    head=lux;
}

void PrintList(node * head) // Function to print the LinkedList
{
  node * curr = head;
  for (; curr != NULL; curr = curr -> next)
  {
        cout << curr -> data << "-->";
  }
cout << "NULL" << endl;
}

/* Counts no. of nodes in linked list */
int getCount(node* head)
{
	int count = 0; // Initialize count
	node* current = head; // Initialize current
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

/* Driver code*/
int main()
{   
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int x;
    cout<<"enter the elements you want:";
    for (int i=0;i<n;i++)
    {   cin>>x;
        insertbeg(x);
    }
    
    cout<<"Linked list after insertion:";
 
    PrintList(head);
	// Function call
	cout << "count of nodes is " << getCount(head);
	return 0;
}
