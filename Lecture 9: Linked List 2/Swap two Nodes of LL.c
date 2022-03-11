Node *swapNodes(Node *head, int i, int j)
{
    Node *temp = head, *prev = NULL; 
    Node *Node1 = NULL, *Node2 = NULL, *Node1_prev = NULL, *Node2_prev = NULL;
    int pos = 0;
    
    // if i and j are equal
    if(i == j) return head; //No changes
    
    while(temp != NULL) {
        if(pos == i) {
            Node1_prev = prev; 
            Node1 = temp;
        }
        else if(pos == j) {
            Node2_prev = prev; Node2 = temp;
        }
        prev = temp;
        temp = temp -> next; pos++; 
    }
    if(Node1_prev != NULL) {
        Node1_prev -> next = Node2;
    }
    else { 
        head = Node2;
    }
    if(Node2_prev != NULL) { 
        Node2_prev -> next = Node1; 
    }
    else {
        head = Node1;
    }
    Node *temp1 = Node2 -> next;
    Node2 -> next = Node1 -> next; 
    Node1 -> next = temp1;
    return head;
}
