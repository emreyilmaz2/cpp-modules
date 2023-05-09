#include "Zombie.hpp"

int main()
{
    Zombie emre = Zombie("emre"); // stack
    Zombie *heap = newZombie("aloo"); //heap

    randomChump("ptr"); // stack ile daha hızlı oluşturulur
    heap->announce();
    emre.announce();
    delete heap;
    return(0);
}
