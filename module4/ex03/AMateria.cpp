#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("default"){
	std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(std::string const & type) : type(type){
	std::cout << "AMateria type constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& amateriaCopy) : type(amateriaCopy.getType()){
	std::cout << "AMateria copy constructor called" << std::endl;
}
AMateria& AMateria::operator=(const AMateria& amateriaCopy){
	type = amateriaCopy.getType();
	std::cout << "AMateria copy assignment operator called" << std::endl;
	return *this;
}
AMateria::~AMateria(){
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const& AMateria::getType() const{
	return type;
}

void AMateria::use(ICharacter& target){
	std::cout << target.getName() << " Called Amateria Use Function" << std::endl;
}
