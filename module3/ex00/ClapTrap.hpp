#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap{
    private:
        std::string name;
        int hit_points; // health of claptrap
        int energy_points;
        int attack_damage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        // ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0){}
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif