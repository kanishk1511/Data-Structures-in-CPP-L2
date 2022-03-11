
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL || head->next==NULL){
		return head;
	}
	if(M==0){
		return NULL;
	}
    if(N==0){
        return head;
    }
	Node *temp1=head;
	Node *temp2;

	while(temp1!=NULL ){
		int count1=1,count2=1;
		while(count1!=M && temp1!=NULL){
			temp1=temp1->next;
			count1++;
		}
		if(temp1==NULL)
		   return head;
		temp2=temp1->next;
		while(count2!=N && temp2!=NULL){
			temp2=temp2->next;
			count2++;
            free (temp2);
		}
		if(temp2!=NULL)
		  temp2=temp2->next;
		temp1->next=temp2;
        temp1=temp2;

	}
	//temp1->next=NULL;
	return head;
}
