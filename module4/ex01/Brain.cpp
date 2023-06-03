#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain(){
	for ( int i=0; i < 100; i++)
		ideas[i] = "emre ->" + std::to_string(i);
	std::cout << YELLOW << "Brain default constructor called" << RESET << std::endl;
}
Brain::Brain(const Brain& brainCopy){
	for(int i=0; i<100; i++)
		ideas[i] = brainCopy.getIdeas(i);
	std::cout << YELLOW << "Brain copy constructor called" << RESET << std::endl;
}
Brain& Brain::operator=(const Brain& brainCopy){
	for(int i=0; i<100; i++)
		ideas[i] = brainCopy.getIdeas(i);
	std::cout << YELLOW << "Brain copy assignment operator called" << RESET << std::endl;
	return *this;
}
Brain::~Brain(){
	std::cout << YELLOW << "Brain destructor called" << RESET << std::endl;
}

std::string Brain::getIdeas(int i) const{
	return (ideas[i]);
}

void Brain::setIdeas(const std::string& new_idea, int i){
	ideas[i] = new_idea;
}
