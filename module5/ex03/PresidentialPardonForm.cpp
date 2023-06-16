#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
    // std::cout << "PresidentalPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string newTarget) : AForm(newTarget, 25, 5){
    // std::cout << "PresidentalPardonForm default constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& preCopy) : AForm(preCopy){
    // std::cout << "PresidentalPardonForm copy constructor called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& preCopy){
    AForm::operator=(preCopy);
    // std::cout << "PresidentalPardonForm copy assigmnet operator called" << std::endl;   
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentalPardonForm destructor called" << std::endl;   
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const{
    if(!getSign())
        throw AForm::NotEnoughToSign();
    else if(executor.getGrade() > getGradeToExecute())
        throw  AForm::NotEnoughToExecute();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

AForm* PresidentialPardonForm::clone(std::string target)
{
    return(new PresidentialPardonForm(target));
}