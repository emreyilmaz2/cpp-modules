#include "ScalarConverter.hpp"

// std::cout << "char: "
// std::cout << "int: "
// std::cout << "float: "
// std::cout << "double: "
int count(std::string str, unsigned int start, unsigned int end, char c)
{
    unsigned int counter = 0;
    for(;start<end; start++){
        if(str[start] == c)
            counter++;
    }
    return counter;
}

bool isWrongNumber(std::string & str)
{
    size_t i;
    if(str[0] == '+' || str[0] == '-')
        if(count(str, 0, str.size(), '-') + count(str, 0, str.size(), '+') != 1)
            return true;
    if((count(str, 0, str.size(), 'f') > 1 || count(str, 0, str.size(), '.') > 1) ||
        ((count(str, 0,str.size(), 'f') == 1) && str[str.size() - 1] != 'f'))
            return true;
    for(i = 0; i < str.size(); i++)
        if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+' && str[i] != 'f' && str[i] != '.')
            return true;
    return false;
}

bool is_it_for_science(std::string &s){
	return (s == "nan" || s == "nanf" || s == "-inf" || s == "inf" || s == "+inf" || s == "-inff" || s == "inff" || s == "+inff");
}

static void convertToChar(std::string &str){
    char c = static_cast<char>(std::atoi(str.c_str()));
    if(is_it_for_science(str))
        std::cout << "impossible" << std::endl;
    else if(c < 32 || c > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << c << "'" << std::endl;
}

static void convertToInt(std::string &str){
    if(is_it_for_science(str))
        std::cout << "impossible" << std::endl;
    else
    	std::cout << std::atoi(str.c_str()) << std::endl;
}

static void convertToFloat(std::string &str){
    float number = std::strtof(str.c_str(), NULL);
    if(number == static_cast<int>(number))
    	std::cout << number << ".0f" << std::endl;
    else
    	std::cout << number << "f" << std::endl;
}

static void convertToDouble(std::string &str){
    double number = std::strtod(str.c_str(), NULL);
    if(number == static_cast<int>(number))
    	std::cout << number << ".0" << std::endl;
    else
    	std::cout << number << std::endl;
}

void typeConversion(std::string str)
{
    std::cout << "char: ", convertToChar(str);
    std::cout << "int: ", convertToInt(str);
    std::cout << "float: ", convertToFloat(str);
    std::cout << "double: ", convertToDouble(str);
}




// void ScalarConverter::convert(std::string str) 
// {
//     types = 0;
//     int i = 0;
//     while(str[i])
//     {
//         if (str[i] == 'f')
//         {
//             if (types == 1)
//                 exit(write(2, "input is invalid\n", 22));
//             types = 3;
//         }   
//         else if (str[i] == '.')
//         {
//             if (types == 1)
//                 exit(write(2, "input is invalid\n", 22));
//             types = 4;
//         }    
//         else if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             if (types == 4 || types ==3)
//                 exit(write(2, "input is invalid\n", 22));
//             types = 1;
//         }
//         i++;
//     }
//     if (types == 0)
//         types = 2;
//     std::cout<< "type değeri : " << types << std::endl;
// } 