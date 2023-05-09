#include "Zombie.hpp"

int main()
{
    // burda ise yine heap te oluşturmamız isteniyor ama bir dizi içerisinde ve dönen değer ilk elemanın adresi ##ilk elemanın yerini gösteren pointer gibi
    Zombie *zombi_surusu = zombieHorde(5, "mehmet");
    for(int i=0; i<5; i++)
        zombi_surusu[i].announce();
    delete[] zombi_surusu; // boyle delete ediliyor mu kontrol et -> ediliyor
    return (0);
}
