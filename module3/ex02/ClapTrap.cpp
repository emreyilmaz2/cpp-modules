#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called : "<< name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap name constructor called : " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy):name(copy.name), hit_points(copy.hit_points), energy_points(copy.energy_points), attack_damage(copy.attack_damage)
{
    std::cout << "ClapTrap copy constructor called : " <<  name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &Copy)
{
    name = Copy.name;
    hit_points = Copy.hit_points;
    energy_points = Copy.energy_points;
    attack_damage = Copy.attack_damage;
    std::cout << "ClapTrap copy constructor called : " << name << std::endl;
    return (*this);
}


ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called : " << name << std::endl;
}


void    ClapTrap::attack(const std::string& target){
    if(!is_dead())
        return;
    std::cout << "ClapTrap " << name << " attacks -> " << target << " causing "
    << attack_damage << " points of damage!" << std::endl;
    energy_points--;
    std::cout << "ClapTrap " << name << " remaining energy points -> " << energy_points << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if(!is_dead())
        return;
    this->hit_points += amount;
    this->energy_points --;
    std::cout << "ClapTrap " + this->name + " is repairing itself "
        << amount << " points of health!" << std::endl;
    std::cout << "ClapTrap " << name << " remaining hit point : " << hit_points << std::endl;
	std::cout << "ClapTrap " << name << " remaining energy point : " << energy_points << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    if(!is_dead())
        return;
    std::cout << "ClapTrap " << name << " has taken " << amount << " points of damage!" << std::endl;
    if(hit_points <= amount)
    {
        hit_points = 0;
        std::cout << "ClapTrap " << name << " remaining hit points : " << hit_points << std::endl;
        std::cout << "ClapTrap " << name << " died!"<< std::endl;
    }
    else
    {
        hit_points -= amount;
        std::cout << "ClapTrap " << name << " remaining hit points : " << hit_points << std::endl;
    }
}

bool ClapTrap::is_dead() const
{
    if(this->hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has already dead" << std::endl;
        return(false);
    }
    else if(this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy points" << std::endl;
        return(false);
    }
    return(true);
}
