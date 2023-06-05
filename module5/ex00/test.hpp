#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <exception>

class test{

private:
    int value;
    std::string amre;
protected:
    int value_protected;
public:
    int value_public;
    
    class test2 : public std::exception{
        
    };
};

#endif