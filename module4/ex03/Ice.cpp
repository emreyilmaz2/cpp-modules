#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& iceCopy) : AMateria(iceCopy.getType()){
	std::cout << "ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& iceCopy){
	type = iceCopy.getType();
	std::cout << "ice copy assignment operator called" << std::endl;
	return *this;
}

Ice::~Ice(){
	std::cout << "ice destructor called" << std::endl;
}


AMateria* Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
