#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
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

#endif
