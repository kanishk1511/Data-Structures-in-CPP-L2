void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.size()==0){
        return ;
    }
    
    int temp = input.top();
    input.pop();
    reverseStack(input,extra);
    
    while(!input.empty()){
           int a = input.top();
           input.pop();
           extra.push(a);
       
    }
    input.push(temp);
    
    while(!extra.empty()){
        int a = extra.top();
        extra.pop();
        input.push(a);
    }   
}
