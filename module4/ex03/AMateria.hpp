#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria{
	protected:
<<<<<<< HEAD
=======
		std::string type;
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
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
