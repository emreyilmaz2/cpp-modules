#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string newTarget);
    PresidentialPardonForm(const PresidentialPardonForm& preCopy);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& preCopy);
    ~PresidentialPardonForm();

    void execute(const Bureaucrat& executor) const;
    virtual AForm* clone(std::string target);
};

#endif