#include "RPN.hpp"

bool isValidExpression(const std::string& expression) {
    char prevChar = ' ';
    for (unsigned int i = 0; i < expression.size(); i++) {
        char c = expression[i];
        if (c != ' ' && c != '+' && c != '-' && c != '*' && c != '/' && !std::isdigit(c)){
            return false;
        }
        if(prevChar != ' ' && c != ' '){
            return false;
        }
        prevChar = c;
    }
    if(prevChar == ' '){
        return false;
    }
    return true;
}


int doCalculate(const std::string& s){
    std::stack<int> myStack;
    int result ;
    for (size_t i = 0; i < s.size(); i++){
        char c = s[i];
        if(isdigit(c))
        {
            // std::cout << "the number : " << c - '0' << " has been pushed" << std::endl;
            myStack.push(c - '0');
        }
        else if(c == '+' || c == '-' || c == '/' || c == '*')
        {
            result = 0;
            int numberOne = myStack.top();
            myStack.pop();
            int numberTwo = myStack.top();
            myStack.pop();
            // std::cout << "our first number is : " << numberOne << std::endl;
            // std::cout << "our second number is : " << numberTwo << std::endl;
            switch (c)
            {
            case '+':
                result += numberOne + numberTwo;
                break;
            case '-':
                result += numberTwo - numberOne;
                break;
            case '*':
                result += numberOne * numberTwo;
                break;
            case '/':
                result += numberOne / numberTwo;
                break;
            }
            myStack.push(result);
            // std::cout << "the result : " << result << " has been pushed" << std::endl;
        }
    }
    return result;
}