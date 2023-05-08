#include <iostream>
#include <string>
#include <iomanip>

class contact //bir kisi
{
    private:
        std::string Name;
        std::string Surname;
        std::string Nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_name(std::string name) {this->Name = name;}
        void set_surname(std::string surname) {this->Surname = surname;}
        void set_Nickname(std::string nickname) {this->Nickname = nickname;}
        void set_phone_number(std::string phone_number) {this->phone_number = phone_number;}
        void set_darkest_secret(std::string darkest_secret) {this->darkest_secret = darkest_secret;}
        std::string get_name(void){return(this->Name);}
        std::string get_surname(void){return(this->Surname);}
        std::string get_Nickname(void){return(this->Nickname);}
        std::string get_phone_number(void){return(this->phone_number);}
        std::string get_darkest_secret(void){return(this->darkest_secret);}
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
    int value = 0;
    int c = 0;
    std::string temp;
    phonebook phonebook;
    char array[10];
    while(1)
    {
        std::cout << "please enter commands add, search, or exit" << std::endl;
        std::cin >> array;
        if(!strcmp("add", array))
        {
            std::cout << "please enter your name -> ";std::cin >> temp;
            phonebook.book[size].set_name(temp);
            std::cout << "and enter your surname -> ";std::cin >> temp; 
            phonebook.book[size].set_surname(temp);
            std::cout << "what's yoru nickname -> ";std::cin >> temp;
            phonebook.book[size].set_Nickname(temp);
            std::cout << "enter your phone number -> ";std::cin >> temp;
            phonebook.book[size].set_phone_number(temp);
            while(is_all_numeric(phonebook.book[size].get_phone_number()))
            {
                std::cout << "your phone number contains other than number try again -> ";
                std::cin >> temp;
                phonebook.book[size].set_phone_number(temp);
            }
            std::cout << "what's your darkest secret oow -> ";std::cin >> temp;
            phonebook.book[size].set_darkest_secret(temp);
            phonebook.book[size].flag = 1;
            size++;
            c++;
        }
        else if(!strcmp("search", array) && c)
        {
            for(int lim=0; phonebook.book[lim].flag ; lim++){
                    std::cout << lim << " |" <<std::setw(10)<<std::right<<phonebook.book[lim].get_name();
                    std::cout << "|" <<std::setw(10)<<std::right<<phonebook.book[lim].get_surname();
                    std::cout << "|" <<std::setw(10)<<std::right<<phonebook.book[lim].get_Nickname()<<std::endl;
            }
            std::cout << "which line you wanna search about ";std::cin >> value;
            while(!(value>=0 && value<=c))
            {
                std::cout << "that line doesnt exist, enter again ";
                std::cin >> value;
            }
            std::cout <<std::endl<< "name -> " << phonebook.book[value].get_name() << std::endl;
            std::cout << "surname -> " << phonebook.book[value].get_surname() << std::endl;
            std::cout << "nickname -> " << phonebook.book[value].get_Nickname() << std::endl;
            std::cout << "phone number -> " << phonebook.book[value].get_phone_number()<< std::endl;
            std::cout << "darkest secret -> " << phonebook.book[value].get_darkest_secret() <<std::endl<<std::endl;
        }
        else if(!strcmp("exit", array))
        {
            std::cout << "you just press quit button" << std::endl;
            exit(0);
        }
        size %= 8;
    }
}