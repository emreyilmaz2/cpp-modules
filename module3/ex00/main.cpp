#include "ClapTrap.hpp"

int main()
{
    ClapTrap c1("Emre");
    ClapTrap c2("Yilmaz");
    ClapTrap c3(c1);
    ClapTrap c4 = c2;
    c4 = c3;

    std::cout << std::endl;
    while (c1.is_dead() && c2.is_dead())
	{
		c1.attack("sude");
		c2.takeDamage(2);
		std::cout << std::endl;
	}
    std::cout << std::endl;
    c1.beRepaired(10);
    std::cout << std::endl;
}
