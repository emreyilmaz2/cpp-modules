#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("anonymous"), isSigned(false), gradeToSign(10), gradeToExecute(20){
    std::cout << "AForm default constructor called" << std::endl;
}
AForm::AForm(std::string name, int gradeSign, int GradeExec) : name(name), isSigned(0), gradeToSign(gradeSign), gradeToExecute(GradeExec){
    std::cout << "AForm default constructor called" << std::endl;
    if(gradeSign < 1 || GradeExec   < 1)
        AForm::GradeTooHighException();
    else if(GradeExec > 150 || gradeSign > 150)
        AForm::GradeTooLowException();
    // std::cout << "AForm parameter constructor called" << std::endl;
}
AForm::AForm(const AForm& AformCopy): name(AformCopy.name), gradeToSign(AformCopy.gradeToSign), gradeToExecute(AformCopy.gradeToExecute){
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
    std::cout << "AForm destructor called" << std::endl;
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
bool AForm::getSign( void ) const{
    return (isSigned);
}

void AForm::beSigned(Bureaucrat& bureaucratCopy){
    // std::cout << "Bureaucrat's grade: "<< bureaucratCopy.getGrade() << std::endl;
    // std::cout << "enough grade: "<< gradeToSign << std::endl;
    if(bureaucratCopy.getGrade() > gradeToSign)
        throw AForm::NotEnoughToSign();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& o, const AForm& AformCopy){
    o << AformCopy.getName() << std::endl;
    o << "grade to sign: " << AformCopy.getGradeToSign() << std::endl;
    o << "grade to execute: " << AformCopy.getGradeToExecute() << std::endl;
    o << "sign: " << std::boolalpha << AformCopy.getSign() << std::endl;
    return o;
}

const char * AForm::GradeTooHighException::what() const throw(){
    return("\n <<< Form's grade can't be higher than '1' >>> \n");
}
const char * AForm::GradeTooLowException::what() const throw(){
    return("\n <<< Form's grade can't be lower than '150' >>> \n");
}
const char * AForm::NotEnoughToSign::what() const throw(){
    return("\n <<< Bureaucrat's grade is not enought to sign this form! >>> \n");
}
const char * AForm::NotEnoughToExecute::what() const throw(){
    return("\n <<< Bureaucrat's grade is not enough to execute this Aform! >>> \n");
}
const char * AForm::FileCreationException::what() const throw(){
    return("\n <<< An error occurred while opening the file. >>> \n");
}
