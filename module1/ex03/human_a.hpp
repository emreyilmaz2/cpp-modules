#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "iostream"
#include "Weapon.hpp"

class human_a
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        void attack(void);
        human_a(std::string name, Weapon& new_weapon);
        human_a();
};

#endif