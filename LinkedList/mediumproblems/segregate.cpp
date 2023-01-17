Node* segregateEvenOdd(Node *head_ref) 
{ 
    // Starting node of list having  
    // even values. 
    Node *evenStart = NULL; 
      
    // Ending node of even values list. 
    Node *evenEnd = NULL; 
      
    // Starting node of odd values list. 
    Node *oddStart = NULL; 
      
    // Ending node of odd values list. 
    Node *oddEnd = NULL; 
      
    // Node to traverse the list. 
    Node *currNode = head_ref; 
      
    while(currNode != NULL){ 
        int val = currNode -> data; 
          
        // If current value is even, add 
        // it to even values list. 
        if(val % 2 == 0) { 
            if(evenStart == NULL){ 
                evenStart = currNode; 
                evenEnd = evenStart; 
            } 
              
            else{ 
                evenEnd -> next = currNode; 
                evenEnd = evenEnd -> next; 
            } 
        }  
          
        // If current value is odd, add  
        // it to odd values list. 
        else{ 
            if(oddStart == NULL){ 
                oddStart = currNode; 
                oddEnd = oddStart; 
            } 
            else{ 
                oddEnd -> next = currNode; 
                oddEnd = oddEnd -> next; 
            } 
        } 
                      
        // Move head pointer one step in  
        // forward direction 
        currNode = currNode -> next;     
    } 
      
    // If either odd list or even list is empty, 
    // no change is required as all elements  
    // are either even or odd. 
    if(oddStart == NULL || evenStart == NULL){ 
        return head_ref; 
    } 
      
    // Add odd list after even list.      
    evenEnd -> next = oddStart; 
    oddEnd -> next = NULL; 
      
    // Modify head pointer to  
    // starting of even list. 
    head_ref = evenStart; 
} 
