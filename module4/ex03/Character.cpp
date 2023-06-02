#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name("Anonymous"){
	std::cout << "Character Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}
Character::Character(const std::string& name) : name(name){
	std::cout << "Character name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}
Character::Character(const Character& characterCopy) : name(characterCopy.getName()){
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;
		if(characterCopy.inventory[i])
			inventory[i] = characterCopy.inventory[i]->clone();
	}
}
Character& Character::operator=(const Character& characterCopy){
	std::cout << "Character assigment operator called" << std::endl;
	if(this != &characterCopy)
	{
		name = characterCopy.getName();
		for (int i = 0; i < 4; i++){
			if(inventory[i]){
				delete inventory[i];
				inventory[i] = NULL;
			}
			if(characterCopy.inventory[i])
				inventory[i] = characterCopy.inventory[i]->clone();
		}
	}
	return *this;
}
Character::~Character(){
	for (int i = 0; i < 4 ; i++)
	{
		if(inventory[i]){
			delete inventory[i];
			inventory[i] = NULL;
		}
	}
	std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const{
	return name;
}

void Character::equip(AMateria* m){
	if(!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if(!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
}
void Character::unequip(int idx){
	if(idx >= 0 && idx <= 4 && inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if(idx >= 0 && idx <= 4 && inventory[idx])
		inventory[idx]->use(target);
}

