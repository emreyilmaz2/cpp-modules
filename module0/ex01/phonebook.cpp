#include <iostream>
#include <string>
#include <iomanip>

class contact //bir kisi
{
    public:
        std::string Name;
        std::string Surname;
        std::string Nickname;
        std::string phone_number;
        std::string darkest_secret;
        bool flag;
};

class phonebook:contact // butun kisiler
{
    
    public:
    contact book[8];
};

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
    int c = 0;
    int temp;
    phonebook phonebook;
    char array[10];
    while(1)
    {
        std::cout << "plase enter commands add, search, or exit" << std::endl;
        std::cin >> array;
        if(!strcmp("add", array))
        {
            std::cout << "please enter your name -> ";std::cin >> phonebook.book[size].Name;
            std::cout << "and enter your surname -> ";std::cin>> phonebook.book[size].Surname;
            std::cout << "what's yoru nickname -> ";std::cin>> phonebook.book[size].Nickname;
            std::cout << "enter your phone number -> ";std::cin>> phonebook.book[size].phone_number;
            while(is_all_numeric(phonebook.book[size].phone_number))
            {
                std::cout << "your phone number contains other than number try again -> ";
                std::cin >> phonebook.book[size].phone_number;
            }
            std::cout << "what's your darkest secret oow -> ";std::cin >> phonebook.book[size].darkest_secret;
            phonebook.book[size].flag = 1;
            size++;
            c++;
        }
        else if(!strcmp("search", array) && c)
        {
            for(int lim=0; phonebook.book[lim].flag ; lim++){
                    std::cout << lim << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].Name;
                    std::cout << "|" <<std::setw(10)<<std::right<<phonebook.book[lim].Surname;
                    std::cout << "|" <<std::setw(10)<<std::right<<phonebook.book[lim].Nickname<<std::endl;
            }
            std::cout << "which line you wanna search about ";std::cin >> temp;
            while(!(temp>=0 && temp <=c))
            {
                std::cout << "that line doesnt exist, enter again ";
                std::cin >> temp;
            }
            std::cout <<std::endl<< "name -> " << phonebook.book[temp].Name << std::endl;
            std::cout << "surname -> " << phonebook.book[temp].Surname << std::endl;
            std::cout << "nickname -> " << phonebook.book[temp].Nickname << std::endl;
            std::cout << "phone number -> " << phonebook.book[temp].phone_number << std::endl;
            std::cout << "darkest secret -> " << phonebook.book[temp].darkest_secret <<std::endl;
        }
        else if(!strcmp("exit", array))
        {
            std::cout << "you just press quit button" << std::endl;
            exit(0);
        }
        size %= 8;
    }
}