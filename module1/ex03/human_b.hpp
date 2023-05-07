#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class human_b
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void    set_weapon(Weapon &weapon);
        void    attack(void);
        human_b();
        human_b(std::string new_name);
};


#endif