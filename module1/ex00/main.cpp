#include "Zombie.hpp"

int main()
{
    // ilk kısım heap'te bir nesne oluşturmak istediğimiz zaman
    Zombie emre;
    Zombie *tester = emre.newZombie("aloo");
    tester->announce();

    std::cout<<std::endl;
    // Bu kısım ise stack'te oluşturulan versiyonu
    Zombie emres;
    emres.randomChump("emres");
}