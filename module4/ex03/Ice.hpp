#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
private:
	std::string type;
public:
	Ice();
	Ice(const Ice& iceCopy);
	Ice& operator=(const Ice& iceCopy);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
