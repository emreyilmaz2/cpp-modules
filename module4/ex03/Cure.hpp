#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure& cureCopy);
		Cure& operator=(const Cure& cureCopy);
		~Cure();

		void use(ICharacter& target);
		AMateria* clone() const;
};

#endif
