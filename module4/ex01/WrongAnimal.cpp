#include "WrongAnimal.hpp"

//this part for wrong animal class
WrongAnimal::WrongAnimal() : type("typeless"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string name) : type(name){
    std::cout << "WrongAnimal name constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal_copy) : type(wrongAnimal_copy.type){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal_copy){
    type = wrongAnimal_copy.type;
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal is making noise" << std::endl;
}


//this part for wrong cat class
WrongCat::WrongCat() : WrongAnimal(){
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(std::string type_new) : WrongAnimal(type_new){
    std::cout << "WrongCat name constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& wrongCat_copy) : WrongAnimal(wrongCat_copy){
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& wrongCat_copy){
    WrongAnimal::operator=(wrongCat_copy);
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return *this;
}
WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "WrongCat is making noise : 'MEOW MEOW'" << std::endl;
}
