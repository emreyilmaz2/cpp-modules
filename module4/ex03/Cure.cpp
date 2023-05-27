#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() :AMateria("cure"){
	std::cout << "Cure Default constructor called" << std::endl;
}
Cure::Cure(const Cure& cureCopy) : AMateria(cureCopy.getType()){
	std::cout << "Cure copy constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& cureCopy){
	type = cureCopy.getType();
	std::cout << "Cure copy assignment operator called" << std::endl;
	return *this;
}
Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target){

}

AMateria* Cure::clone() const{

}
