#include "Ice.hpp"
<<<<<<< HEAD
=======
#include "ICharacter.hpp"
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada

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

<<<<<<< HEAD
void Ice::use(ICharacter& target){
	std::cout << "Ice: " << "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
=======

AMateria* Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
}
