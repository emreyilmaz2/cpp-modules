#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string newTarget);
    ShrubberyCreationForm(const ShrubberyCreationForm& sCopy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& sCopy);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;
    virtual AForm* clone(std::string target);
};

#endif