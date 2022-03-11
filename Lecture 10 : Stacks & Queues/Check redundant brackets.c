#include <stack>

bool checkRedundantBrackets(string str) {
    stack<char> s;
    
    for(int i=0; str[i]!='\0'; i++){ //traverse through string 
        
        if(str[i]=='('){   // in case - (   then push
            s.push(str[i]);
        }
        else if (str[i]=='+' || str[i]=='-' ||  str[i]=='*' ||  str[i]=='/' ){ // this case also push to stack
                s.push(str[i]);
        }
        else if(str[i]==')'){
            if(s.top()=='('){   // mean no char btwn () therefore redundant
                return true;
            }
            else{
                while(s.top()!='('){ 
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return false;
}
