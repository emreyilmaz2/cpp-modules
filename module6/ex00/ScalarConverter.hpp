#ifndef SCALARCONVERTER_HPP 
#define SCALARCONVERTER_HPP 

#include <iostream>
#include <unistd.h>
#include <string>
#include <cmath> // -> for isinf() function
#include <cstdlib> // -> for atoi() function

void typeConversion(std::string str);
bool is_it_for_science(std::string &s);
bool isWrongNumber(std::string & str);

/*
1 = char;
2 = int;
3 = float;
4 = double;
*/
// class ScalarConverter
// {
//     private:

//     public:
//         void convert(std::string str); 
//         int types;

// };

#endif