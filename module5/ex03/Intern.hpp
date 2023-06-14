#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
private:
    Form *forms[3];
public:
    Intern();
    Intern(const Intern& internCopy);
    Intern& operator=(const Intern& internCopy);
    ~Intern();

    Form* makeForm(const std::string& formName, const std::string& target);
};
#endif