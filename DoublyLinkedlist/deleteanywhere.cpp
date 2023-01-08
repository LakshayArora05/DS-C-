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



void deletehead(node* &head){
    node * lux=head;
    head=head->next;
    delete lux;
}

void deleteatpos(int pos)
{
    if (pos==1)
    {
        deletehead(head);
    }
    else{
        node *temp=head;
        int i=1;
        while(temp!=NULL and i!=pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        if (temp->next!=NULL)
        {
            temp->next->prev=temp->prev;
        }
    delete temp;
    }
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
