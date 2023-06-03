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
	const WrongAnimal* z = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << z->getType() << " " << std::endl;
	i->makeSound(); // will output animal sound
	j->makeSound(); // will output Dog sound
	meta->makeSound(); // will output Cat sound
	z->makeSound(); // will output wronganimal sound


	delete meta;
	delete j;
	delete i;
	delete z;
	return 0;
}
