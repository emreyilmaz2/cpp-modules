#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria{
	protected:
	public:
		AMateria();
		AMateria(std::string name);
		AMateria(const AMateria& amateriaCopy);
		AMateria& operator=(const AMateria& amateriaCopy);
		virtual ~AMateria();

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
