#include "Animal.hpp"

// for animal class

Animal::Animal() : type("nameless"){
	std::cout << MAGENTA << "Animal default constructor called" << RESET << std::endl;
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
	std::cout << RED << "Animal destructor called" << RESET << std::endl;
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
	DogBrain = new Brain();
	std::cout << CYAN << type << ": default constructor called" << RESET << std::endl;
}
Dog::Dog(const Dog& dog_copy){
	Animal::type = dog_copy.type;
	DogBrain = new Brain(*dog_copy.getBrain());
	// DogBrain = dog_copy.DogBrain;
	std::cout << CYAN << type << ": copy constructor called" << RESET << std::endl;
}
Dog& Dog::operator=(const Dog& dog_copy){
	Animal::operator=(dog_copy);
	if(this != &dog_copy)
	{
		delete DogBrain;
		DogBrain = new Brain(*dog_copy.getBrain());
	}
	// DogBrain = dog_copy.DogBrain;
	std::cout << CYAN << type << ": copy assignment operator called" << RESET << std::endl;
	return *this;
}
Dog::~Dog(){
	delete DogBrain;
	std::cout << RED << type << ": destructor called" << RESET << std::endl;
}
void Dog::makeSound() const{
	std::cout << CYAN << type << ": WOOf WOOf" << RESET << std::endl;
}
Brain* Dog::getBrain() const{
	return DogBrain;
}



// for cat class

Cat::Cat() : Animal(){
	Animal::type = "Cat";
	CatBrain = new Brain();
	std::cout << GREEN << type <<": default constructor called" << RESET<< std::endl;
}
Cat::Cat(const Cat& catCopy){
	Animal::type = catCopy.type;
	CatBrain = new Brain(*catCopy.getBrain());
	std::cout << GREEN << type << ": copy constructor called" << RESET<< std::endl;
}
Cat& Cat::operator=(const Cat& catCopy){
	Animal::operator=(catCopy);
	if(this != &catCopy){
		delete CatBrain;
		CatBrain = new Brain(*catCopy.getBrain());
	}
	// CatBrain = catCopy.CatBrain;
	std::cout << GREEN << type << ": copy assignment operator called" << RESET<< std::endl;
	return *this;
}
Cat::~Cat(){
	delete CatBrain;
	std::cout << RED << type << ": destructor called" << RESET<< std::endl;
}
void Cat::makeSound(void) const{
	std::cout << GREEN << type << ": MEOW MEOW" << RESET<< std::endl;
}
Brain* Cat::getBrain() const{
	return CatBrain;
}
