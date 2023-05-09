#include "Zombie.hpp"

void   Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){}

Zombie::~Zombie(){
    std::cout << name << " -> died" << std::endl;
}
