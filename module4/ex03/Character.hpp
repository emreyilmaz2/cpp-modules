#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
std::string name;
AMateria* inventory[4];
public:
	Character();
<<<<<<< HEAD
=======
	Character(std::string name);
>>>>>>> 41ba9194cd8204fc1805c01d202343d87d0adada
	Character(const Character& characterCopy);
	Character& operator=(const Character& characterCopy);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
