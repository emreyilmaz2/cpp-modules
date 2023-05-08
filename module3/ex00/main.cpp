#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("Emre");
    ClapTrap c2("sude");
    ClapTrap c3(c2);
    ClapTrap c4 = c1;
    c4 = c3;

    std::cout << std::endl;
    while (c1.is_dead() && c2.is_dead())
	{
		c1.attack("sude");
		c2.takeDamage(2);
		std::cout << std::endl;
	}
}