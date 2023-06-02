#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main()
{
	{
		std::cout << std::endl;
		std::cout << "****************---TEST---*********************" << std::endl;
		IMateriaSource* src = new MateriaSource();

		std::cout << std::endl;
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		std::cout << std::endl;
		ICharacter* emres = new Character("emre");

		std::cout << std::endl;
		AMateria* tmp;
		tmp = src->createMateria("ice");
		emres->equip(tmp);
		tmp = src->createMateria("cure");
		emres->equip(tmp);

		std::cout << std::endl;
		ICharacter* bahadir = new Character("sude");

		std::cout << std::endl;
		emres->use(0, *bahadir);
		emres->use(1, *bahadir);

		// std::cout << std::endl;
		// delete Ozturk;
		// delete emres;
		// delete src;
		// std::cout << std::endl;
	}
	return 0;
}
