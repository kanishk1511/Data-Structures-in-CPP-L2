class Queue {
    Node *head, *tail;
    int size;
	// Define the data members
   public:
    Queue() {
        head=NULL;
        tail = NULL;
        size=0;
		// Implement the Constructor
	}
	
	//----------------- Public Functions of Stack -----------------/

	int getSize() {
        return size;
		// Implement the getSize() function
	}

    bool isEmpty() {
        return size==0;
		// Implement the isEmpty() function
	}

    void enqueue(int data) {
        Node *newnode = new Node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
      
        }
        
        size++;
		// Implement the enqueue() function
	}

    int dequeue() {
        if(isEmpty()){
            return -1;
        }
        else{
             int ans = head->data;
             Node *temp= head;
             head= head->next;
             delete temp;
             size--;
             return ans;
        }
       
        
        // Implement the dequeue() function
    }

    int front() {
        if(isEmpty()){
            return -1;
        }
        int ans =head->data;
        return ans;
        // Implement the front() function
    }
};
