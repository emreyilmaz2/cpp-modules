#include "Weapon.hpp"
#include "human_a.hpp"
#include "human_b.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        human_a emre("emre", club);
        emre.attack();
        club.set_type("--> some other type of club");
        emre.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");
        human_b jim("Jim");
        jim.set_weapon(club);
        jim.attack();
        club.set_type("--> some other type of club");
        jim.attack();
    }
}