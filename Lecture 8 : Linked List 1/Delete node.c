Node *deleteNode(Node *head, int pos)
{
    Node* temp = head;
    int count = 0;
    Node* prev = NULL;
    if(head==NULL){
        return head;
        
    }
    if(pos==0){
        head=head->next;
        return head;
        
    }
    while(count<pos-1){
        temp=temp->next;
        count++;
        if(temp->next==NULL){
            return head;
        }
    }
    prev = temp -> next;
    Node* a =prev->next;
    prev->next=NULL;
    temp->next = a;
    delete prev;
    return head;
    // Write your code here.
}
