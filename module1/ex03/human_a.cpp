#include "human_a.hpp"

void    human_a::attack(void)
{
    std::cout << this->name << " attack with their " << weapon_a.get_type() << std::endl;
}

human_a::human_a(std::string name, Weapon &new_weapon) : weapon_a(new_weapon)
{
    this->name = name;
}

human_a::~human_a(){
	std::cout << name << " has died" << std::endl;
}
