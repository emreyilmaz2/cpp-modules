#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& brainCopy);
	Brain& operator=(const Brain& brainCopy);
	~Brain();

	std::string getIdeas(int i) const;
	void setIdeas(const std::string& new_idea, int i);
};

#endif
