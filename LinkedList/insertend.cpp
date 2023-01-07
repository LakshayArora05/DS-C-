#include <iostream>
using namespace std;
struct node{
    
    int data;
    node *next;
};
node *head=NULL;
node *tail;

void insertEnd (int d)
{
  node *lux = new node();
  lux->data=d;
  lux->next=NULL;

  //If list is empty
  if(head==NULL)
  head=lux;
  //else list is not empty
  else
  {
   node *tail = head;
   while(tail->next != NULL)
   {
    tail=tail->next;
   }
   tail->next=lux;

  }}

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
    cout<<"Linked list after insertion at the end is:";
    insertEnd (8);
    insertEnd (99);
    PrintList(head);
    return 0;
}
