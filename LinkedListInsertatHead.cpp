#include <iostream>
using namespace std;

class Node{
    
    public:
    
    int data;
    Node* next;
    
//constructor
    
    Node(int data) 
    {
        this -> data= data;
        this -> next= NULL;
    }
    
};

void insertatHead(Node* &head ,int d){
    
    Node* temp= new Node(d);
    temp -> next = head;
    head=temp;

}
void print(Node* &head)
{
    Node* temp= head;
    while( temp!=NULL) 
    {
        cout<<temp -> data<<" ";
        temp=temp -> next;
    }
}

int main()
{
 
    Node* head= NULL;
    cout<<"Initially,The Linked List is:";
    print(head);
    int n;
    cout<<" \nEnter the total number of values you want in the linked list:";
    cin>>n;
    int y;
    int i;
    
    for (i=0;i<n;i++)
    {   cout<<"\nEnter Value you want to insert at the beginning:";
        cin>>y;
        insertatHead(head,y);
        cout<<"\nThe Linked List looks like:";
        print(head);
        
        
    }
    cout<<" \nThe Linked List after insertion is:";
    print(head);
    
    return 0;
}
