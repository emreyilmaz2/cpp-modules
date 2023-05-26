#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        unsigned int hit_points; // health of claptrap
        unsigned int energy_points;
        unsigned int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap& operator=(const ClapTrap& Copy);
        virtual ~ClapTrap();

        bool    is_dead() const;
        virtual void    attack(const std::string& target);
        virtual void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        unsigned int get_damage(){return attack_damage;}
};

#endif
