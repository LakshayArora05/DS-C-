#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};
node *head=NULL;
node *tail;
void reverse(node* &head)
{
    node* temp = NULL;
    node* current =head;
 
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
 
    /* Before changing the head, check for the cases like
       empty list and list with only one node */
    if (temp != NULL)
        head = temp->prev;
}

void insertathead(int d){
    node * lux=new node();
    lux->data=d;
    lux->next=head;
    
    lux->prev=NULL;
    if (head!=NULL)
    {
        head->prev=lux;
    }
    
    head=lux;
}

void display(node *head)
{
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<""<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null";
}
int main(){
    insertathead(10);
    

  
     insertathead(12);
    insertathead(14);
   
    
   
    
   
   display(head);
   reverse(head);
   cout<<"after reverse:";
   display(head);
}
