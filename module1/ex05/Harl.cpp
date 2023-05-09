#include "Harl.hpp"

// int which_level(std::string level)
// {
//     std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
//     int i = 0;

//     while(i < 4)
//     {
//         if(level == levels[i])
//             return(i);
//         i++;
//     }
//     return(-1);
// }

void Harl::debug(void)
{
    std::cout<< "[ DEBUG ]" << std::endl;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::error(void)
{
    std::cout<< "[ ERROR ]" << std::endl;
    std::cout<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::info(void)
{
    std::cout<< "[ INFO ]" << std::endl;
    std::cout<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout<< "[ WARNING ]" << std::endl;
    std::cout<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i=0; i<4; i++){
        if(str[i] == level)
            (this->*functions[i])();
    }
    // int res = which_level(level);
    // switch (res)
    // {
    // case 0:
    //     this->debug();
    //     break;
    // case 1:
    //     this->info();
    //     break;
    // case 2:
    //     this->warning();
    //     break;
    // case 3:
    //     this->error();
    //     break;
    // default:
    //     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    // }
}
