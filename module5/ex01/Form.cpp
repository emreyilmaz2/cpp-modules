#include "Form.hpp"

Form::Form() : name("anonymous"), isSigned(false), gradeToSign(10), gradeToExecute(20){
    // std::cout << "Form default constructor called" << std::endl;
}
Form::Form(std::string name, int gradeSign, int GradeExec) : name(name), gradeToSign(gradeSign), gradeToExecute(GradeExec){
    isSigned = 0;
    if(gradeSign < 1 || GradeExec < 1)
        throw Form::GradeTooHighException();
    else if(GradeExec > 150 || gradeSign > 150)
        throw Form::GradeTooLowException();
    // std::cout << "Form parameter constructor called" << std::endl;
}
Form::Form(const Form& formCopy): name(formCopy.name), isSigned(formCopy.isSigned),  gradeToSign(formCopy.gradeToSign), gradeToExecute(formCopy.gradeToExecute) {
    // std::cout << "Form copy constructor called" << std::endl;
}
Form& Form::operator=(const Form& formCopy){
    *const_cast<std::string*>(&name) = formCopy.name;
    *const_cast<int*>(&gradeToExecute) = formCopy.gradeToExecute;
    *const_cast<int*>(&gradeToSign) = formCopy.gradeToSign;
    isSigned = getSign();
    // std::cout << "Form copy assigment operator called" << std::endl;
    return *this;
}
Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName( void ) const{
    return (name);
}
int Form::getGradeToExecute( void ) const{
    return (gradeToExecute);
}
int Form::getGradeToSign( void ) const{
    return (gradeToSign);
}
bool Form::getSign( void ) const{
    return (isSigned);
}

void Form::beSigned(Bureaucrat& bureaucratCopy){
    std::cout << "Bureaucrat's grade: "<< bureaucratCopy.getGrade() << std::endl;
    std::cout << "enough grade: "<< gradeToSign << std::endl;
    if(bureaucratCopy.getGrade() > gradeToSign)
        throw Form::NotEnoughToSign();
    isSigned = true;
}


std::ostream& operator<<(std::ostream& o, const Form& formCopy){
    o << "name: " << formCopy.getName() << std::endl;
    o << "grade to sign: " << formCopy.getGradeToSign() << std::endl;
    o << "grade to execute: " << formCopy.getGradeToExecute() << std::endl;
    o << "sign: " <<std::boolalpha<< formCopy.getSign() << std::endl;
    return o;
}

Form::GradeTooHighException::GradeTooHighException(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"Form's grade can't be higher than '1'"<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>"<<std::endl;
}

Form::GradeTooLowException::GradeTooLowException(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"Form's grade can't be lower than '150'"<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}

Form::NotEnoughToSign::NotEnoughToSign(){
    std::cout <<"<<<<<<<<<<<<<<<Error!>>>>>>>>>>>>>>"<<std::endl;
    std::cout <<"Bureaucrat's grade is not enought to sign this form! "<<std::endl;
    std::cout <<"<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>"<<std::endl;
}