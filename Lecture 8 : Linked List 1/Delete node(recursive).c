Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
     if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        
    }
    else 
    {
        Node *temp = deleteNodeRec(head->next, pos - 1);
        head->next = temp;
    }

    return head;
}
