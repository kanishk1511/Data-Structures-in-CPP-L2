
Node *kReverse(Node *head, int k)
{
	
   Node *curr=head;
   Node *prev= NULL;
   Node *nxt;
   if(k<=0) 
       return head;
   int count=0;
   while(count<k  && curr!= NULL){
      nxt = curr->next;
      curr->next= prev;
      prev =curr;
      curr=nxt;
      count++;
   }

   if(nxt!=NULL)
   head->next=kReverse(nxt,k);

   return prev;
}
