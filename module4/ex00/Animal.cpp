#include "Animal.hpp"

// for animal class

Animal::Animal() : type("Animal"){
	std::cout << MAGENTA << type  << ": default constructor called" << RESET << std::endl;
}
Animal::Animal(std::string name) : type(name){
	std::cout << MAGENTA << "default name constructor called" << RESET << std::endl;
}
Animal::Animal(const Animal& animal_copy) : type(animal_copy.type){
	std::cout << MAGENTA << type << ": copy constructor called" << RESET << std::endl;
}
Animal& Animal::operator=(const Animal& animal_copy){
	this->type = animal_copy.getType();
	std::cout << MAGENTA << type << ": copy assigment operator called" << RESET  << std::endl;
	return *this;
}
Animal::~Animal(){
	std::cout << RED << "Animal: destructor called" << RESET << std::endl;
}
void Animal::makeSound() const{
	std::cout << MAGENTA <<type<< ": i'm making sound"<< RESET  << std::endl;
}
std::string Animal::getType(void) const{
	return(this->type);
}


// for dog class

Dog::Dog() : Animal(){
	Animal::type = "Dog";
	std::cout << CYAN << type << ": default constructor called" << RESET << std::endl;
}
Dog::Dog(const Dog& dog_copy){
	Animal::type = dog_copy.type;
	std::cout << CYAN << type << ": copy constructor called" << RESET << std::endl;
}
Dog& Dog::operator=(const Dog& dog_copy){
	Animal::operator=(dog_copy);
	std::cout << CYAN << type << ": copy assignment operator called" << RESET << std::endl;
	return *this;
}
Dog::~Dog(){
	std::cout << RED << type << ": destructor called" << RESET << std::endl;
}
void Dog::makeSound() const{
	std::cout << CYAN << type << ": WOOf WOOf" << RESET << std::endl;
}



// for cat class

Cat::Cat() : Animal(){
	Animal::type = "Cat";
	std::cout << GREEN << type << ": default constructor called" << RESET<< std::endl;
}
Cat::Cat(const Cat& Cat_copy){
	Animal::type = Cat_copy.type;
	std::cout << GREEN << type << ": copy constructor called" << RESET<< std::endl;
}
Cat& Cat::operator=(const Cat& Cat_copy){
	Animal::operator=(Cat_copy);
	std::cout << GREEN << type << ": copy assignment operator called" << RESET<< std::endl;
	return *this;
}
Cat::~Cat(){
	std::cout << RED << type << ": destructor called" << RESET<< std::endl;
}
void Cat::makeSound(void) const{
	std::cout << GREEN << type << ": MEOW MEOW" << RESET<< std::endl;
}
