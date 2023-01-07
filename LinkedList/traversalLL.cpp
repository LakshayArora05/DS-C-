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

void traversal(node * head) // Function to print the LinkedList
{
  node * curr = head;
  for (; curr != NULL; curr = curr -> next)
  {
        cout << curr -> data << "-->";
  }
cout << "NULL" << endl;
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
 
    traversal(head);

	return 0;
}

