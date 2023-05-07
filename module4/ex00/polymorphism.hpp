#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>

class Animal{
	public:
		std::string type;
		virtual std::string getType(void){return (this->type);}
};


class Dog: public Animal{
	private:
		std::string name;
	public:
		Dog();
		void makeSound(void);
		std::string getType(void);
};

class Cat: public Animal{
	private:
		std::string name;
	public:
		Cat();
		void makeSound(void);
	std::string getType(void);
};

#endif
