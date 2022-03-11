Node* insertNode(Node *head, int i, int data) {
   Node *newNode=new Node(data);
   if(head==NULL){
      return head;
   }
	if(i==0){
      newNode->next=head;
      head = newNode;
      return head;
   }
    
   Node *sec = insertNode(head->next,i-1, data);
   head->next =sec;

   return head;

}
