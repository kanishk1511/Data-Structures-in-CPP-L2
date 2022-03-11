
Node *midPoint(Node *head)
{
    // Write your code here
    if (head==NULL){
		return head;
	}
   Node *slow = head;
   Node *fast = head->next;
	
   while (fast!= NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
   }
	return slow;
}
