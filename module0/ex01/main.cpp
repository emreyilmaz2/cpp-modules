#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int is_all_numeric(std::string number)
{
    int i=0;
    while (number[i])
    {
        if(!(number[i] >= '0' && number[i] <= '9'))
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    int size = 0;
    int value = 0;
    int c = -1;
    std::string temp;
    std::string array;
    std::string num;
    phonebook phonebook;
    while(1)
    {
        std::cout << "--> please enter commands add, search, or exit" << std::endl;
        std::getline(std::cin, array);
        if(array == "add")
        {
            std::cout << "please enter your name -> ";
            std::getline(std::cin, temp);
            phonebook.book[size].set_name(temp);

            std::cout << "and enter your surname -> ";
            std::getline(std::cin, temp);
            phonebook.book[size].set_surname(temp);

            std::cout << "what's yoru nickname -> ";
            std::getline(std::cin, temp);
            phonebook.book[size].set_Nickname(temp);

            std::cout << "enter your phone number -> ";
            std::getline(std::cin, temp);
            phonebook.book[size].set_phone_number(temp);
            while(phonebook.book[size].get_phone_number().empty() || is_all_numeric(phonebook.book[size].get_phone_number()))
            {
                std::cout << "your phone number contains other than number or empty, try again -> ";
                std::getline(std::cin, temp);
                phonebook.book[size].set_phone_number(temp);
            }
            std::cout << "what's your darkest secret oow -> ";
            std::getline(std::cin, temp);
            phonebook.book[size].set_darkest_secret(temp);
            phonebook.book[size].flag = 1;
            size++;
            c++;
        }
        else if(array == "search" && c)
        {
            for(int lim=0; phonebook.book[lim].flag ; lim++){
                    if(phonebook.book[lim].get_name().length() > 10)
                        std::cout << lim << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_name().substr(0,10) + ".";
                    else
                        std::cout << lim << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_name();
                    if(phonebook.book[lim].get_surname().length() > 10)
                        std::cout << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_surname().substr(0,10) + ".";
                    else
                        std::cout << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_surname();
                    if(phonebook.book[lim].get_Nickname().length() > 10)
                        std::cout << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_Nickname().substr(0,10) + "." << std::endl;
                    else
                        std::cout << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_Nickname() << std::endl;
            }
            std::cout << "which line you wanna search about ";
            std::getline(std::cin, num);
            while(is_all_numeric(num) || num.empty())
            {
                std::cout << "number contains other than number or empty, try again -> ";
                std::getline(std::cin, num);
            }
            value = std::stoi(num);
            while(!(value >=0 && value<=c))
            {
                std::cout << "that line doesnt exist, enter again ";
                std::getline(std::cin, num);
                value = std::stoi(num);
            }
            std::cout <<std::endl<< "name -> " << phonebook.book[value].get_name() << std::endl;
            std::cout << "surname -> " << phonebook.book[value].get_surname() << std::endl;
            std::cout << "nickname -> " << phonebook.book[value].get_Nickname() << std::endl;
            std::cout << "phone number -> " << phonebook.book[value].get_phone_number()<< std::endl;
            std::cout << "darkest secret -> " << phonebook.book[value].get_darkest_secret() <<std::endl<<std::endl;
        }
        else if(array == "exit")
        {
            std::cout << "you just press quit button" << std::endl;
            exit(0);
        }
        size %= 8;
    }
}
