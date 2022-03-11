Node *appendLastNToFirst(Node *head, int n)
{
   Node *temp =head;
   Node *tail=head;
   int length=0;
    
    if(head==NULL) //empty list
        return head;
    
   while(temp!=NULL){
      temp= temp->next;
      length++;
   }
    
   int i = length -n;
   for(int j=1; j<length; j++){
      tail = tail->next;
   }
    
   temp=head;
   for(int j=1; j<i; j++){
      temp = temp->next;
   }
   tail->next=head;
   head= temp->next;
   temp->next=NULL;

   return head;
    
}
