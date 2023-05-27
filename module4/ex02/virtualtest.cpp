#include <iostream>

class purevirtual{
public:
    virtual void define() = 0;
};

class test : public purevirtual{
public:
    test(){};
    void getter();
    std::string setter();
    void define(){}
};

int main()
{
    test a;
    return (0);
}