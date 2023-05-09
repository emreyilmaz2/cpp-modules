#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "iostream"
#include "Weapon.hpp"

class human_a
{
private:
    std::string name;
    Weapon &weapon_a;
public:
    human_a(std::string name, Weapon& new_weapon);
    ~human_a();
    void set_name(std::string _name){name = _name;}
    std::string getName(void){return(this->name);}
    void attack(void);
};

#endif
