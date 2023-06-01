#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
<<<<<<< HEAD
private:
	std::string type;
=======
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
public:
	Ice();
	Ice(const Ice& iceCopy);
	Ice& operator=(const Ice& iceCopy);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
