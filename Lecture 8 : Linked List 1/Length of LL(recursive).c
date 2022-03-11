int length(Node *head) {
   Node *temp =head;
    
    if(temp==NULL){
        return 0;
    }
    else if(temp->next==NULL){
        return 1;
    }
    int count = 1+ length(temp->next);
    return count;      
}
