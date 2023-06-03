#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


// int main()
// {
// 	{
// 		std::cout << std::endl;
// 		std::cout << "****************---TEST---*********************" << std::endl;
// 		IMateriaSource* src = new MateriaSource();

// 		std::cout << std::endl;
// 		src->learnMateria(new Ice());
// 		src->learnMateria(new Cure());

// 		std::cout << std::endl;
// 		ICharacter* emres = new Character("emre");

// 		std::cout << std::endl;
// 		AMateria* tmp;
// 		tmp = src->createMateria("ice");
// 		emres->equip(tmp);
// 		tmp = src->createMateria("cure");
// 		emres->equip(tmp);

// 		std::cout << std::endl;
// 		ICharacter* bahadir = new Character("sude");

// 		std::cout << std::endl;
// 		emres->use(0, *bahadir);
// 		emres->use(1, *bahadir);

// 		std::cout << std::endl;
// 		delete bahadir;
// 		delete emres;
// 		delete src;
// 		std::cout << std::endl;
// 	}
// 	return 0;
// }


int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	std::cout << std::endl;
	src->learnMateria(new Cure());
	std::cout << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	return 0;
}