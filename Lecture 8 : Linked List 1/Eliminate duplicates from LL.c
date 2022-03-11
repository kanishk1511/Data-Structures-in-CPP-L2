Node *removeDuplicates(Node *head)
{
   Node *prev = head;
   Node *curr = head;
	if(head==NULL){
		return head;
	}
	while (curr!=NULL){
      prev = curr;
	  curr = curr ->next;
	  while(curr!=NULL && curr->data == prev->data){
			curr=curr->next;
			
	  }
		prev->next=curr;
	}
	return head;
}
