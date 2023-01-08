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
     insertathead(15);
    insertathead(10);
    insertathead(11);
    display(head);
}
