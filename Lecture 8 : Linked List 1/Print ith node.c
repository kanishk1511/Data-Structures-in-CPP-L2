void printIthNode(Node *head, int i)
{
    int count = 0;
    Node* temp = head;
    while(count<i && temp != NULL){
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        cout<<temp->data;
    }
    //Write your code here
}
