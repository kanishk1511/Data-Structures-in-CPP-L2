Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
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
