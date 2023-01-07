#include <iostream>
using namespace std;
struct node{
    
    int data;
    node *next;
};
node *head=NULL;

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

int main()
{   cout<<"The original linked list is:";
    PrintList(head);
    cout<<"Linked list after insertion at the beginning is:";
    insertbeg(100);
    insertbeg(1001);
    insertbeg(1021);
    PrintList(head);
    return 0;
}
