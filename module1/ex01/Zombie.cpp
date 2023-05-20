#include "Zombie.hpp"

void   Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}

Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* new_zombie = new Zombie(name);
    return(new_zombie);
}

void    Zombie::randomChump(std::string name)
{
    Zombie new_zombie(name);
    new_zombie.announce();
}