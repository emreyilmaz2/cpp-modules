#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

private:
    bool guard_mode;
public:
    ScavTrap(){}
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& copy);
    ~ScavTrap(){}

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    guard_Gate();
};


#endif
