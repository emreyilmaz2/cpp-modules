#include "Zombie.hpp"

void   Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie():name("default"){
    std::cout << name << ": obje olusturuldu" << std::endl;
}

Zombie::~Zombie(){
    std::cout << name << ": destructor called ! " << std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
    std::cout << name << ": obje olusturuldu" << std::endl;
}

Zombie* Zombie::newZombie(std::string name){
    Zombie* new_zombie = new Zombie(name);
    return(new_zombie);
}

void    Zombie::randomChump(std::string name){
    Zombie new_zombie(name);
    new_zombie.announce();
}