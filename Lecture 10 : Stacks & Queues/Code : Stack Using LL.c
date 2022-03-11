class Stack {
    Node *head;
    int size;
	// Define the data members
   public:
    Stack() {
        size=0;
        head=NULL;
        
        // Implement the Constructor
    }

	//----------------- Public Functions of Stack -----------------/

    int getSize() {
        return size;
        // Implement the getSize() function
    }

    bool isEmpty() {
        return head==NULL;
        // Implement the isEmpty() function
    }

    void push(int element) {
        Node *newnode = new Node(element);
        if(head==NULL){
            head=newnode;
            head->next=NULL;
        }
        else{
            newnode->next= head;
            head=newnode;
        }
        size++;
        // Implement the push() function
    }

    int pop() {
        if(head==NULL){
            return - 1;
        }
        else{
            Node *ans = head;
            head=head->next;
            int data = ans->data;
            delete ans;
            size--;
            return data;
        }
        
        // Implement the pop() function
    }

    int top() {
        if(head==NULL){
            return - 1;
        }
        else{
            int data = head->data;
            return data;
        }
        // Implement the top() function
    }
};
