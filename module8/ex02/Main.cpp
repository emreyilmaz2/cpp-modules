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
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    ++it;
    --it;
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

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
    return 0;
}