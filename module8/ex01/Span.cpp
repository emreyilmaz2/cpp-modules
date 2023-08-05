#include "Span.hpp"

Span::Span(unsigned int N) : count(N){
    // std::cout << "Span default constructor called" << std::endl;
}
Span::Span(const Span& spanCopy) : count(spanCopy.count){
    for (unsigned int i = 0; i < spanCopy.vec.size(); i++)
        vec.push_back(spanCopy.vec.at(i));
    // std::cout << "Span Copy constructor called" << std::endl;
}
Span& Span::operator=(const Span& spanCopy){
    count = spanCopy.count;
    for (unsigned int i = 0; i < spanCopy.vec.size(); i++)
        vec.push_back(spanCopy.vec.at(i));
    // std::cout << "Span Copy constructor called" << std::endl;
    return *this;
}
Span::~Span(){
    // std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(unsigned int number){
    if(vec.size() >= count)
        throw noStorageLeft();
    vec.push_back(number);
}

int Span::shortestSpan(){
    if(vec.size() <= 1)
        throw notEnoughNumbers();

    int shortest = INT_MAX;
    for(unsigned int i = 1; i < vec.size(); i++){
        int tempSpan = abs(vec[i] - vec[i - 1]);
        if(tempSpan < shortest)
            shortest = tempSpan;
    }
    return shortest;
}

int Span::longestSpan(){
    if(vec.size() <= 1)
        throw notEnoughNumbers();
        
    int longest = INT_MIN;
    for(unsigned int i = 1; i < vec.size(); i++){
        int tempSpan = abs(vec[i] - vec[i - 1]);
        if(tempSpan > longest)
            longest = tempSpan;
    }
    return longest;
}

void Span::addManyNumbers(unsigned int number){
    if(vec.size() + number > count)
        throw noStorageLeft();
    srand(time(0));
    for (unsigned int i = 0; i < number; i++){
        int randomNumber = rand() % 10001;
        vec.push_back(randomNumber);
    }   
}

std::vector<int> &Span::getVector(){
    return (this->vec);
}
void Span::printData( void ){
    for (unsigned int i = 0; i < vec.size(); i++)
        std::cout << vec.at(i) << " ";
}