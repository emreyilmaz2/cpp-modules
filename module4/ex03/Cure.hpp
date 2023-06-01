#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
<<<<<<< HEAD
	private:
		std::string type;
=======
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
	public:
		Cure();
		Cure(const Cure& cureCopy);
		Cure& operator=(const Cure& cureCopy);
		~Cure();

		void use(ICharacter& target);
<<<<<<< HEAD
=======
		AMateria* clone() const;
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
};

#endif
