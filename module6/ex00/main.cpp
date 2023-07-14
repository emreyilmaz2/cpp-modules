#include "iostream"
#include "ScalarConverter.hpp"
#include <unistd.h>

bool isValid(std::string &str)
{
    char temp;
    if(is_it_for_science(str))
        return (true);
    if((str.length() == 1) && isalpha(str[0]))
    {
        temp = static_cast<int>(str[0]);
        str = temp;
        return (true);
    }
    if(isWrongNumber(str))
        return (false);
    return (true);
}

int main(int argc, char **argv)
{
    if(argc != 2)
        exit(write(2, "Wrong argument count ! \n", 24));
    std::string str = (std::string)argv[1];
    if(isValid(str))
        typeConversion(str);
    else
        std::cerr << "this is invalid" << std::endl;
}

    // std::string str = static_cast<std::string>(argv[1]);
    // if(!str.compare("nan") || !str.compare("nanf"))
    // {
    //     std::cout << "char: impossible" << std::endl;
    //     std::cout << "int: impossible" << std::endl;
    //     std::cout << "float: nanf" << std::endl;
    //     std::cout << "double: nan" << std::endl;
    //     return 0;
    // }
 
    // // char //
    // char *tempChar = argv[1];
    // if(!isalpha(tempChar[0]))
    //     std::cout << "char: non displayable" << std::endl;
    // else
    //     std::cout << "char: "<< tempChar << std::endl;

    // // integer //
    // int tempInt = static_cast<int>(atoi(argv[1]));
    // if(atof(argv[1]) > 2147483647 || atof(argv[1]) < -2147483648)
    //     std::cout << "int: impossible" << std::endl;
    // else
    //     std::cout << "int: " << tempInt << std::endl;

    // // float //
    // float tempFloat = static_cast<float>(atof(tempChar));
    // if(isinf(tempFloat))
    //     std::cout << "float: " << "infinitive" << std::endl;
    // else if(tempFloat - tempInt == 0 && tempFloat < 999999)
	// 	std::cout << "float: " << tempFloat << ".0f" << std::endl; // bu satir neden yapiliyor
    // else
	// 	std::cout << "float: " << tempFloat << "f" << std::endl;
     
    // // double //

    // double tempDouble = static_cast<double>(tempFloat);
    // if(isinf(tempDouble))
    //     std::cout << "double: " << "infinitive" << std::endl;
    // else if(tempDouble - tempFloat == 0 && tempDouble < 999999) // yine neden gerekli anlayamadim
	// 	std::cout << "double: " << tempDouble << ".0" << std::endl;
    // else
	// 	std::cout << "double: " << tempDouble << std::endl;