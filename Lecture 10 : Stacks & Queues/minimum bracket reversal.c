#include<stack>

int countBracketReversals(string input) {
    
    
    
    if(input.length()%2!=0){
        return -1;
    }
    
    int count=0;
    stack<char> s;
    
    for (int i=0; input[i]!='\0'; i++)
    {
        
        if(input[i]=='{'){
            s.push(input[i]);
        }
        
        else {
            
               if(s.empty())
                   s.push(input[i]);
                
               else if(!s.empty() && s.top()=='}')
                   s.push(input[i]);
            
               else if(!s.empty() && s.top()=='{')
                   s.pop();
        }
    }
    while(!s.empty()){
        char c1= s.top();
        s.pop();
        char c2 = s.top();
        s.pop();
        
        if(c1==c2)
            count++;
        else
            count +=2;
    }
    
    return count;
}
