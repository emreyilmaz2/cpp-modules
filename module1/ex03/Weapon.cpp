#include "Weapon.hpp"

const std::string &Weapon::get_type()
{
    return (this->type);
}

void    Weapon::set_type(std::string new_type)
{
    type = new_type;
}

Weapon::Weapon(std::string new_type):type(new_type){}

Weapon::Weapon(){}
Weapon::~Weapon(){
    std::cout << type << " died" << std::endl;
}
