class Deque {
    int *data;
    int rear,front,size;
    
    public:
    Deque(int size){
        data = new int[size];
        rear=0;
        front=-1;
        this->size=size;
    }
    bool isFull() {
        // used % operator is insertion and deletion is in circular manner 
        return (front == (rear + 1) % size);
    }
    //Checks whether Deque is empty or not.
    bool isEmpty () {
        return (front == -1);
    }
    // Inserts an element at front 
    void insertFront(int input) {
        if (isFull()) {
            cout << "-1\n";
            return;
        }
        if (isEmpty()) {    //isEmpty() ?
            front = 0;
            rear = 0;
        }
        else {
            // used % operator is insertion is in circular manner
            front = ((front - 1) % size + size) % size;
        }
        data[front] = input ;
    } 
    void insertRear(int input) {
        if (isFull()) { 
            cout << "-1\n ";
            return;
        }
        if (isEmpty()) { 
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }
        data[rear] = input;
    }
    void deleteFront() {
        if (isEmpty()) {
            cout << "-1\n";
            return ;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }
    void deleteRear() { 
        if (isEmpty()) {
            cout << "-1\n";
            return ;
        }
        if (front == rear) { 
            front = -1;
            rear = -1; 
        }
        else {
            rear = ((rear-1) % size + size) % size;
        }
    }

    int getFront() {
        if (isEmpty()) { 
            return -1 ;
        }
        return data[front];
    }
    int getRear() {
        if(isEmpty()) {
            return -1 ;
        }
        return data[rear];
    }
};
