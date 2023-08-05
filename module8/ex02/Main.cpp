#include "MutantStack.hpp"
#include "MutantStack.tpp"


int main()
{
    // tryin stack with integers
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << std::endl;
    std::stack<int> mstack2;
    mstack2.push(5);
    mstack2.push(17);
    mstack2.pop();
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    //[...]
    mstack2.push(0);
    while (mstack2.size() > 0){
        std::cout << mstack2.top() << std::endl;
        mstack2.pop();
    }
    

    // trying stack with characters
    MutantStack<char> charStack;
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');
    MutantStack<char>::iterator itStart = charStack.begin();
    MutantStack<char>::iterator itEnd = charStack.end();
    while(itStart != itEnd)
    {
        std::cout << *itStart << std::endl;
        ++itStart;
    }
}