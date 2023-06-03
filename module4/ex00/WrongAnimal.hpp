#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal& wrongAnimal_copy);
    WrongAnimal& operator=(const WrongAnimal& wrongAnimal_copy);
    ~WrongAnimal();

    void makeSound(void) const;
    std::string getType(void) const{return type;}
};

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(std::string type_new);
    WrongCat(const WrongCat& wrongCat_copy);
    WrongCat& operator=(const WrongCat& wrongCat_copy);
    ~WrongCat();

    void makeSound(void) const;
    std::string getType(void) const;
};

#endif
