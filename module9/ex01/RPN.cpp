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


static int doCalculate(const std::string& s){
    std::stack<int> myStack;
    
    for (size_t i = 0; i < s.size(); i++){
        char c = s[i];
        if(isdigit(c))
        {

        }
        else if(c == '+' || c == '-' || c == '/' || c == '*')
        {

        }
    }
    
}