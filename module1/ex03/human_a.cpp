#include "human_a.hpp"

void    human_a::attack(void)
{
    std::cout << this->name << " attack with their " << this->weapon->get_type() << std::endl;
}

human_a::human_a(std::string name, Weapon &new_weapon)
{
    this->name = name;
    this->weapon = &new_weapon;
}

human_a::human_a()
{
}