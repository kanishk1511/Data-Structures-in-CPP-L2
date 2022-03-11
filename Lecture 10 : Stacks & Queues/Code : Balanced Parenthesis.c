
from sys import stdin


def isEmpty(stack) :
    return len(stack) == 0

def isBalanced(expression) :

        stack = list()

        for i in range(len(expression)) :

            if expression[i] == '(' :
                stack.append(expression[i])
            elif expression[i] == ')' :
                if isEmpty(stack) :
                    return False

                topChar = stack.pop();

                if expression[i] == ')' and topChar == '(' :
                    continue
                else :
                    return False
                
        return isEmpty(stack);




#main
expression = stdin.readline().strip()

if isBalanced(expression) :
    print("true")

else :
    print("false")
