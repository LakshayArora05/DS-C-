Node* reverseLinkedList(Node *head)
{
    Node *lux=NULL;
    while(head!=NULL){
        Node *next=head->next;
        head->next=lux;
        lux=head;
        head=next;
        
    }
    return lux;
}
