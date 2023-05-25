#include "Animal.hpp"
#include "WrongAnimal.hpp"

// void a(){
// 		const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();

// 	delete i;
// 	delete j;
// 	delete meta;
// }

int main() {
	// a();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongCat* z = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << z->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	z->makeSound();


	delete meta;
	delete j;
	delete i;
	return 0;
}
