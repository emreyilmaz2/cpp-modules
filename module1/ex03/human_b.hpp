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
    ~human_b();
    human_b(std::string new_name);
    void set_name(std::string name){this->name = name;}
    std::string get_name(){return(this->name);}
};

#endif
