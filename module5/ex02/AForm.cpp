#include "AForm.hpp"

AForm::AForm() : name("anonymous"), isSigned(false), gradeToSign(10), gradeToExecute(20){
    // std::cout << "AForm default constructor called" << std::endl;
}
AForm::AForm(std::string name, int gradeSign, int GradeExec) : name(name), gradeToSign(gradeSign), gradeToExecute(GradeExec){
    isSigned = 0;
    if(gradeSign < 1 || GradeExec   < 1)
        AForm::GradeTooHighException();
    else if(GradeExec > 150 || gradeSign > 150)
        AForm::GradeTooLowException();
    // std::cout << "AForm parameter constructor called" << std::endl;
}
AForm::AForm(const AForm& AformCopy): name(AformCopy.name), gradeToSign(AformCopy.gradeToSign), gradeToExecute(gradeToExecute){
    isSigned = 0;
    // std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& AformCopy){
    *const_cast<std::string*>(&name) = AformCopy.name;
    *const_cast<int*>(&gradeToExecute) = AformCopy.gradeToExecute;
    *const_cast<int*>(&gradeToSign) = AformCopy.gradeToSign;
    isSigned = getSign();
    // std::cout << "AForm copy assigment operator called" << std::endl;
    return *this;
}
AForm::~AForm(){
    // std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName( void ) const{
    return (name);
}
int AForm::getGradeToExecute( void ) const{
    return (gradeToExecute);
}
int AForm::getGradeToSign( void ) const{
    return (gradeToSign);
}
bool AForm::getSign( void ){
    return (isSigned);
}

std::ostream& operator<<(std::ostream& o, const AForm& AformCopy){
    o << "name: " << AformCopy.getName() << std::endl;
    o << "grade to sign: " << AformCopy.getGradeToSign() << std::endl;
    o << "grade to execute: " << AformCopy.getGradeToExecute() << std::endl;
    return o;
}