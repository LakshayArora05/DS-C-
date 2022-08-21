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

void insertatTail(Node* &tail ,int d){
    
    Node* temp= new Node(d);
    tail -> next = temp;
    tail= tail -> next;

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
    int z;
    cout<<"Enter head value";
    cin>>z;
    Node* node1=new Node(z);
    Node* head= node1;
    Node* tail= node1;
   
    
    cout<<"Initially,The Linked List is:";
    print(head);
    int n;
    cout<<" \nEnter how many more values you want in the linked list:";
    cin>>n;
    int y;
    int i;
    for (i=0;i<n;i++)
    {   cout<<"\nEnter Value you want to insert at the end:";
        cin>>y;
        
        insertatTail(tail,y);
        cout<<"\nThe Linked List looks like:";
        print(head);
        
        
    }
    cout<<" \nThe Linked List after insertion is:";
    print(head);
    
    
    
    return 0;
}

