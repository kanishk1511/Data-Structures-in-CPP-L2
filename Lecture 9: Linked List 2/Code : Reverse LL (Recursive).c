Node *reverseLinkedListRec(Node *head)
{
   if(head==NULL || head->next==NULL){
		return head;
	}
	Node *newhead = reverseLinkedListRec(head->next);
	head->next->next=head;
	head->next=NULL;
	
   return newhead;
}
