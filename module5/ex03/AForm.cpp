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

AForm::GradeTooHighException::GradeTooHighException(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"AForm's grade can't be higher than '1'"<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>"<<std::endl;
}

AForm::GradeTooLowException::GradeTooLowException(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"AForm's grade can't be lower than '150'"<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}

AForm::NotEnoughToSign::NotEnoughToSign(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"Bureaucrat's grade is not enough to sign this Aform! "<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}

AForm::NotEnoughToExecute::NotEnoughToExecute(){   
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"Bureaucrat's grade is not enough to execute this Aform! "<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}

AForm::FileCreationException::FileCreationException(){   
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"An error occurred while opening the file."<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}

