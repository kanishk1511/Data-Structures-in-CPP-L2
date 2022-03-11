
Node *bubbleSort(Node *head)
{
    Node *temp = head;
    int count = 0;
    
    //count length of LL
    while(temp != NULL){
        temp = temp -> next;
        count++;
    }
    int i = 0;
    while(i < count){
        temp = head;
        
        //check greater node
        while(temp != NULL && temp -> next != NULL){
            if(temp -> data > temp -> next -> data){
                swap(temp -> data, temp -> next -> data);
            }
            temp = temp -> next;
        }
        i++;
    }
    return head;
}
