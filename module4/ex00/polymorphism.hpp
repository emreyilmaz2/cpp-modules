#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string a_type);
		Animal(const Animal& animal_copy);
		Animal& operator=(const Animal& animal_copy);
		virtual ~Animal();

		virtual void makeSound(void) const;
		std::string getType(void) const;
};


class Dog: public Animal{
public:
	Dog();
	Dog(const Dog& dog_copy);
	Dog& operator=(const Dog& dog_copy);
	~Dog();
	
	void makeSound(void) const;
};

class Cat: public Animal{
public:
	Cat();
	Cat(const Cat& cat_copy);
	Cat& operator=(const Cat& cat_copy);
	~Cat();

	void makeSound(void) const;
};

#endif
