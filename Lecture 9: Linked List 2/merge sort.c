
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
   Node *newHead;
   if(head1==NULL)
      return head2;
   if(head2==NULL)
      return head1;
   if(head1->data<head2->data){
      newHead=head1;
      newHead->next=mergeTwoSortedLinkedLists(head1->next,head2);
   }
   else{
      newHead=head2;
      newHead->next=mergeTwoSortedLinkedLists(head1,head2->next);
   }
   return newHead;
}

Node *mergeSort(Node *head){
   if(head==NULL|| head->next==NULL)
	   return head;
	
   Node *slow = head;
   Node *fast = head->next;
	
   while (fast!= NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
   }
   Node *temp=slow->next;
   slow->next=NULL;
   Node *head1=mergeSort(head);
   Node *head2=mergeSort(temp);

   return mergeTwoSortedLinkedLists(head1,head2);
}
