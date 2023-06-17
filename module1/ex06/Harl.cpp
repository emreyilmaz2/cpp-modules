#include "Harl.hpp"

int which_level(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while(i < 4)
    {
        if(level == levels[i])
            return(i);
        i++;
    }
    return(-1);
}

void Harl::debug(void)
{
    std::cout<< "[ DEBUG ]" << std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void Harl::error(void)
{
    std::cout<< "[ ERROR ]" << std::endl;
    std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::info(void)
{
    std::cout<< "[ INFO ]" << std::endl;
    std::cout<< "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout<< "[ WARNING ]" << std::endl;
    std::cout<< "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain ( std::string level ) {
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while(!levels[i].empty() && level.compare(levels[i]))
		i++;
	
	void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int a = i; a < 4; a++)
		(this->*(ptr[a]))();

	switch(i){
		case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
		}
}
