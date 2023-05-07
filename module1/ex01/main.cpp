#include "Zombie.hpp"

int main()
{
    // burda ise yine heap te oluşturmamız isteniyor ama bir dizi içerisinde ve dönen değer ilk elemanın adresi ##ilk elemanın yerini gösteren pointer gibi
    Zombie ne;
    Zombie *zombi_surusu = ne.zombieHorde(5, "mehmet erken gelmissin");
    for(int i=0; i<5; i++)
    {
        zombi_surusu[i].announce();
        std::cout<<std::endl;
    }
    delete[] zombi_surusu; // boyle delete ediliyor mu kontrol et
    delete(zombi_surusu); // boyle delete ediliyor mu kontrol et
}