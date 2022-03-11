void deleteAlternateNodes(Node *head) 
{
    Node *currentNode = head;

    while (currentNode != NULL && currentNode->next != NULL) 
    {
        Node *temp = currentNode->next;
        currentNode->next = currentNode->next->next;
        temp->next = NULL;
        delete temp;
        currentNode = currentNode->next;
    }
}
