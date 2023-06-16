#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern& internCopy);
    Intern& operator=(const Intern& internCopy);
    ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target);

    class FormNotFound : public std::exception{
        const char* what() const throw();
    };

private:
    AForm *forms[3];
};
#endif