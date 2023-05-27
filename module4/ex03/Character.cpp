#include "Character.hpp"

Character::Character() : name("Default"){
	std::cout << "Character Default constructor called" << std::endl;
}
Character::Character(const Character& characterCopy) : name(characterCopy.getName()){
	std::cout << "Character copy constructor called" << std::endl;
}
Character& Character::operator=(const Character& characterCopy){
	name = characterCopy.getName();
	std::cout << "Character assigment operator called" << std::endl;
	return *this;
}
Character::~Character(){
	std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const{
	return name;
}
void Character::equip(AMateria* m){}
void Character::unequip(int idx){}
void Character::use(int idx, ICharacter& target){}

