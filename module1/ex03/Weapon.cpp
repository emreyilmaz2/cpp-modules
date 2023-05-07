#include "Weapon.hpp"

const std::string &Weapon::get_type()
{
    return (this->type);
}

void    Weapon::set_type(std::string new_type)
{
    this->type = new_type;
}

Weapon::Weapon(std::string new_type)
{
    this->type = new_type;
}

Weapon::Weapon()
{
}