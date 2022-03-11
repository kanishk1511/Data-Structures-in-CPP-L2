
Node* printReverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;        
    }
    Node* newhead = printReverse(head->next);
    head->next->next=head;
    head->next = NULL;
    return newhead;
}

bool isPalindrome(Node *head)
{
	Node* temp= head;
	int len = 0;
    if(head==NULL){
        return true;
    }
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	temp = head;
	for(int i=1;i<len/2; i++)
		temp=temp->next;
	
	Node *mid = printReverse(temp->next);
	temp->next=NULL;
	
	while(mid!=NULL && head!=NULL){
		if(head->data!=mid->data)
			return false;
		
		head=head->next;
		mid=mid->next;
	}

   return true; 
}
