#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){
    // std::cout << "default constructor called" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& mutantCopy) :std::stack<T>(mutantCopy){
    // std::cout << "copy constructor called" << std::endl;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& mutantCopy){
    if(this != &mutantCopy)
        this->c = mutantCopy.c;
    return *this;
    // std::cout << "copy assignment operator called" << std::endl;
}

template<typename T>
MutantStack<T>::~MutantStack(){
    // std::cout << "destructor called" << std::endl;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return this->c.begin();
}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return this->c.end();
}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() const{
    return this->c.begin();
}
template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() const{
    return this->c.end();
}


#endif