Node *reverseLinkedList(Node *head) {
    Node *prev =NULL;
	Node *curr = head;
	Node *nxt ;
   while(curr!=NULL){
		nxt = curr->next;
		curr->next=prev;
		prev=curr;
		curr = nxt;
   }
    return prev;
}
