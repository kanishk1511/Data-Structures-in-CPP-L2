
Node *evenAfterOdd(Node *head)
{
	Node *evenh = NULL; 
	Node *oddh = NULL;
	Node *e = NULL;
	Node *o = NULL;

	if(head==NULL || head->next==NULL)
		return head;
	
	while(head!=NULL){
		if(head->data%2==0){
			if(evenh==NULL){
				evenh=head;
				e = head;
			}
			else{
			   e->next=head;
			   e = e->next;
		   }
		}
		else{ 
			if(oddh==NULL){
				oddh=head;
				o = head;
			}
			else{
				o->next=head;
			   o =o->next;
			}
		}
		head=head->next;
	}
	//if list has only even elements
	if(o==NULL){    
		head=evenh;
	}
    else if (e==NULL){
        head=oddh;
    }
	else{
		head=oddh;
		o->next=evenh;
		e->next=NULL;
	}
	return head;
	
}
