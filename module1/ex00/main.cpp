#include "Zombie.hpp"

int main()
{
    // ilk kısım heap'te bir nesne oluşturmak istediğimiz zaman
    Zombie emre("emre");
    emre.announce();
    // Bu kısım ise stack'te oluşturulan versiyonu
    Zombie emres;
    emres.randomChump("emres");
}