#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};
node *head=NULL;
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



void insertattail(int d)
{
    if (head==NULL)
    {
        insertathead(d);
        
            }
    else{
    node * lux=new node();
     lux->data=d;
     node *temp=head;
     while (temp->next!=NULL)
     {
          temp=temp->next;
     }
    
    temp->next=lux;
    lux->prev=temp;
    }
}
void insert_at_pos(node* &head,int val,int pos)
{
    node* n=new node();
    n->data=val;
    node* temp=head;
    node* po=temp->next;
    
    if(head==NULL || pos==1)
    {
        insertathead(val);
        return;
    }
   
    int count=2;
    while(count!=pos)
    {
       temp=temp->next;
        if(temp->next==NULL)
    {
        insertattail(val);
        return;
    }
       po=po->next;
      count++;
    }
   
    temp->next=n;
    n->prev=temp;
    n->next=po;
    po->prev=n;
    
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
    

    insertathead(123);
    insertattail(125667);
    insert_at_pos(head,6,2);
    display(head);
   
}
