#include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string& target){
    if(!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "ClapTrap " + this->name + "attacks -> " + target + "causing "
        << this->attack_damage + "points of damage!" << std::endl;
    }
    else
        std::cout<<"ClapTrap" + this->name + "could not do anything because no hit_points or energy_points left" << std::endl;
    // target lose this->attack_damage points health(hit points)
}

void    ClapTrap::beRepaired(unsigned int amount){
    if(!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "ClapTrap " + this->name + "is repairing itself " 
        << amount + "points of health!" << std::endl;
        this->hit_points += amount;
        this->energy_points --;
    }
    else
        std::cout<<"ClapTrap" + this->name + "could not do anything because no hit_points or energy_points left" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if(!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "ClapTrap " + this->name + " is taking "
        << amount + "points of damage!" << std::endl;
        this->hit_points -= amount;
        this->energy_points --;
    }
    else
        std::cout<<"ClapTrap" + this->name + "could not do anything because no hit_points or energy_points left" << std::endl;
}


ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}
