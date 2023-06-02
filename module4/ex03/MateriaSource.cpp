#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		Materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& materiaCopy){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(materiaCopy.Materias[i])
			Materias[i] = materiaCopy.Materias[i]->clone();
	}

}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaCopy)
{
	std::cout << "MateriaSource copy assignment called" << std::endl;
	if(this != &materiaCopy)
	{
		for (int i = 0; i < 4; i++){
			if(Materias[i])
			{
				delete Materias[i];
				Materias[i] = NULL;
			}
			if(materiaCopy.Materias[i])
				Materias[i] = materiaCopy.Materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(Materias[i])
		{
			delete Materias[i];
			Materias[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* M){
	if(!M)
		return;
	for (int i = 0; i < 4; i++)
	{
		if(!Materias[i])
		{
			Materias[i] = M;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if(Materias[i] && Materias[i]->getType() == type)
			return (Materias[i]->clone());
	}
	return 0;
}

