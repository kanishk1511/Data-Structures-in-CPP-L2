Node* helper(Node *head){
    if(head -> next == NULL){
        head -> data++;
        return head;
    }
    head -> next = helper(head -> next);
    if(head->next->data > 9)
    {
        head->next->data=0;
        head->data+=1;
    }
    return head;
}
Node* NextLargeNumber(Node *head) {
   head = helper(head);
    
    if(head -> data > 9)      
    {
        Node *temp = new Node(1);
        head -> data = 0;
        temp -> next = head;
        head = temp;
    }
    return head;
}
