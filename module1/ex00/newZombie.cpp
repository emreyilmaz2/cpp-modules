#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	/* yeni bir zombi yaratir ve adlandirir sonra geri dondurur */
	return(new Zombie(name));
}
