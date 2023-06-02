#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria* Materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& materiaCopy);
	MateriaSource& operator=(const MateriaSource& materiaCopy);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
