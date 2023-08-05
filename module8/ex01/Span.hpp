#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <span>

class Span{
private:
    unsigned int count;
    std::vector<int> vec;
public:
    Span(unsigned int N);
    Span(const Span& spanCopy);
    Span& operator=(const Span& spanCopy);
    ~Span();

    void addNumber(unsigned int number);// It will be used in order to fill it. Any attempt to add a new element if thereare already N elements stored should throw an exception.
    void addManyNumbers(unsigned int number);
    void printData( void );

    int longestSpan(); // If there are no numbers stored, or only one, no span can be found. Thus, throw an exception.
    int shortestSpan();

    std::vector<int> &getVector();

    class noStorageLeft : public std::exception{
        const char * what() const throw(){
            return("< There are already so many elements, sorry ! >");}
    };
    class notEnoughNumbers : public std::exception{
        const char * what() const throw(){
            return("< Not enough numbers to find a span! >");}
    };
};

#endif