#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if(argc != 2){
        std::cout << " Error : wrong argument count ! " << std::endl;
        return (1);
    }
    if(!isValidExpression(argv[1])){
        std::cout << "Error" << std::endl;
        return (1);
    }
    int res = doCalculate(argv[1]);
    std::cout << res << std::endl;
}