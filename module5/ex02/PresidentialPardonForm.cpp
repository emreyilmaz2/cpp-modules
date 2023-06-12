#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresindentalPardonForm::PresindentalPardonForm(const std::string newTarget) : target(newTarget){
    // std::cout << "PresidentalPardonForm default constructor called" << std::endl;
}
PresindentalPardonForm::PresindentalPardonForm(const PresindentalPardonForm& preCopy) : target(preCopy.getName()){
    // std::cout << "PresidentalPardonForm copy constructor called" << std::endl;
}
PresindentalPardonForm& PresindentalPardonForm::operator=(const PresindentalPardonForm& preCopy){
    AForm::operator=(preCopy);
    // std::cout << "PresidentalPardonForm copy assigmnet operator called" << std::endl;   
}
PresindentalPardonForm::~PresindentalPardonForm(){
    // std::cout << "PresidentalPardonForm destructor called" << std::endl;   
}

void PresindentalPardonForm::execute(const Bureaucrat& executor) const{
    if(!getSign())
        throw AForm::NotEnoughToSign();
    else if(executor.getGrade() > getGradeToExecute())
        throw  AForm::NotEnoughToExecute();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}