#include "human_b.hpp"

human_b::human_b(std::string new_name)
{
    this->name = new_name;
}

human_b::human_b(){}

human_b::~human_b(){
    std::cout << name << " has died" << std::endl;
}

void    human_b::attack(void)
{
    std::cout << this->name + " attacks with their " << this->weapon->get_type() << std::endl;
}

void    human_b::set_weapon(Weapon &weapon)
{
    this->weapon =  &weapon;
}
