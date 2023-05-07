#include "polymorphism.hpp"

Dog::Dog(){
	this->type = 'DOG';
}

void Dog::makeSound(void){
	std::cout << "woof woof" << std::endl;
}

std::string Dog::getType(void){
	return(this->type);
}


Cat::Cat(){
this->type = 'CAT';
}

void Cat::makeSound(void){
	std::cout << "meow meow" << std::endl;
}

std::string Cat::getType(void){
	return(this->type);
}
