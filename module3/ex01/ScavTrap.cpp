#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	name = "Default";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guard_mode = false;
	std::cout << "ScavTrap Default Constructor called : " << name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	guard_mode = false;
	std::cout << "ScavTrap Name Constructor called : " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& Scav_Copy) : ClapTrap(Scav_Copy){
	guard_mode = Scav_Copy.guard_mode;
	std::cout << "ScavTrap Copy Constructor Called : " << name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& Scav_Copy){
	ClapTrap::operator=(Scav_Copy);
	guard_mode = Scav_Copy.guard_mode;
	std::cout << "ScavTrap copy assigment operator called : " << name << std::endl;
	return *this;
}

void	ScavTrap::attack(const std::string& target){
	if(!is_dead())
		return;
	std::cout << "ScavTrap " << name << " attacks " << target
		<< ", causing " << attack_damage << " points of damage" << std::endl;
	energy_points--;
	std::cout << "ScavTrap " << name << " remaining energy points : " << energy_points << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	if(guard_mode)
		std::cout << "ScavTrap " << name << " can't be attacked because it is in guard gate mode!" << std::endl;
	else
		ClapTrap::takeDamage(amount);
}

void ScavTrap::guardGate(void){
	if(hit_points > 0){
		guard_mode = true;
		std::cout << "ScavTrap " << name << "is now in guard gate mode" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " guard gate mode closed because of dead!" << std::endl;
}

ScavTrap::~ScavTrap(){
		std::cout << "ScavTrap destructor called" << std::endl;
}
