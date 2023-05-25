#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	name = "Default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << " FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	name = "Default";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap_copy) : ClapTrap(FragTrap_copy){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrap_copy){
	ClapTrap::operator=(FragTrap_copy);
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << name << ": destructor called" << std::endl;
}

void FragTrap::HighFiveGuys(){
	std::cout << "FragTrap " << name << " positive highFive request sent!"<< std::endl;
}
