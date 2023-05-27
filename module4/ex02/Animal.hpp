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

class Animall{
	protected:
		std::string type;
	public:
		Animall();
		Animall(std::string a_type);
		Animall(const Animall& animal_copy);
		Animall& operator=(const Animall& animal_copy);
		virtual ~Animall();

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};


class Dog: public Animall{
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

class Cat: public Animall{
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
