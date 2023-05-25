#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>

// Renkli çıktı için ANSI kaçış kodları
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

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
private:
	Brain* DogBrain;
public:
	Dog();
	Dog(const Dog& dog_copy);
	Dog& operator=(const Dog& dog_copy);
	~Dog();

	void makeSound(void) const;
	Brain* getBrain() const;
};

class Cat: public Animal{
private:
	Brain* CatBrain;
public:
	Cat();
	Cat(const Cat& catCopy);
	Cat& operator=(const Cat& catCopy);
	~Cat();

	void makeSound(void) const;
	Brain* getBrain() const;
};

#endif
