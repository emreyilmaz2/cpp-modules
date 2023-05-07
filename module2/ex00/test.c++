#include "iostream"
class dog
{
private:
    int age;
    std::string name;
public:
    dog(){age = 3; name = "dummy";};
    void set_age(int& new_age){age = new_age; new_age++;};
};

int main()
{
    dog dog_fluffy;

    int i = 99;
    dog_fluffy.set_age(i);
    std::cout << i << std::endl;
}