#include "polymorphism.hpp"

// for animal class

Animal::Animal() : type("nameless"){
	std::cout << type  << ": default constructor called" << std::endl;
}
Animal::Animal(std::string name) : type(name){
	std::cout << "default name constructor called" << std::endl;
}
Animal::Animal(const Animal& animal_copy) : type(animal_copy.type){
	std::cout << type << ": copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& animal_copy){
	this->type = animal_copy.getType();
	std::cout << type << ": copy assigment operator called" << std::endl;
	return *this;
}
Animal::~Animal(){
	std::cout << type << ": destructor called" << std::endl;
}
void Animal::makeSound() const{
	std::cout <<type<< ": i'm making sound" << std::endl;
}
std::string Animal::getType(void) const{
	return(this->type);
}


// for dog class

Dog::Dog() : Animal(){
	Animal::type = "Dog";
	std::cout << type << ": default constructor called" << std::endl;
}
Dog::Dog(const Dog& dog_copy){
	Animal::type = dog_copy.type;
	std::cout << type << ": copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& dog_copy){
	Animal::operator=(dog_copy);
	std::cout << type << ": copy assignment operator called" << std::endl;
	return *this;
}
Dog::~Dog(){
	std::cout << type << ": destructor called" << std::endl;
}
void Dog::makeSound() const{
	std::cout << type << ": WOOf WOOf" << std::endl;
}



// for cat class

Cat::Cat() : Animal(){
	Animal::type = "Cat";
	std::cout << type << ": default constructor called" << std::endl;
}
Cat::Cat(const Cat& Cat_copy){
	Animal::type = Cat_copy.type;
	std::cout << type << ": copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& Cat_copy){
	Animal::operator=(Cat_copy);
	std::cout << type << ": copy assignment operator called" << std::endl;
	return *this;
}
Cat::~Cat(){
	std::cout << type << ": destructor called" << std::endl;
}
void Cat::makeSound(void) const{
	std::cout << type << ": MEOW MEOW" << std::endl;
}