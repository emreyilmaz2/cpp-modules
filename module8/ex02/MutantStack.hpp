#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T> 
class MutantStack : public std::stack<T>{
public:
    MutantStack();
    MutantStack(const MutantStack& mutantCopy);
    MutantStack& operator=(const MutantStack& mutantCopy);
    ~MutantStack();
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();
    iterator begin() const;
    iterator end() const;
};

#endif