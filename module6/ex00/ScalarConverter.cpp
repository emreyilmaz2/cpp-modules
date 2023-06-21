#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str) 
{
    types = 0;
    int i = 0;
    while(str[i])
    {
        if (str[i] == 'f')
        {
            if (types == 1)
                std::cout << "hataaaaaağğğğğ 1" << std::endl; 
            types = 3;
        }   
        else if (str[i] == '.')
        {
            if (types == 1)
                std::cout << "hataaaaaağğğğğ 2" << std::endl; 
            types = 4;
        }    
            
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (types == 4 || types ==3)
                std::cout << "hataaaaaağğğğğ 3" << std::endl; 
            types = 1;
        }
        i++;
    }
    if (types == 0)
        types = 2;

    std::cout<< "type değeri : " << types << std::endl;
} 