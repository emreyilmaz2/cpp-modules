#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string new_type);
    Weapon();
    ~Weapon();

    const std::string& get_type();
    void    set_type(std::string new_type);
};


#endif
