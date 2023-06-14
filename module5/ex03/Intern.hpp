#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Form* makeForm(const std::string& formName, const std::string& target);

private:
    struct FormCreator {
        std::string name;
        Form* (*creator)(const std::string&);
    };

    static Form* createShrubberyCreationForm(const std::string& target);
    static Form* createRobotomyRequestForm(const std::string& target);
    static Form* createPresidentialPardonForm(const std::string& target);

    static const FormCreator formCreators[];

    static const int NUM_FORM_CREATORS;
};
#endif