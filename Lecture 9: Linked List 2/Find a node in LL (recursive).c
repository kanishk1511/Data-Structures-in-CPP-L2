
int findNodeRec(Node *head, int n)
{
    if(head==NULL){
        return -1;

    }
    if(head->data==n){
        return 0;
    }

    int index =  findNodeRec(head->next , n);
    if(index == -1){
        return -1;
    }else{
        return index + 1;
        
    }

	//Write your code here
}
