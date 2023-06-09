#include "Form.hpp"

Form::Form() : name("anonymous"), isSigned(false), gradeToSign(10), gradeToExecute(20){
    // std::cout << "Form default constructor called" << std::endl;
}
Form::Form(std::string name, int gradeSign, int GradeExec) : name(name), gradeToSign(gradeSign), gradeToExecute(GradeExec){
    isSigned = 0;
    if(gradeSign < 1 || GradeExec   < 1)
        Form::GradeTooHighException();
    else if(GradeExec > 150 || gradeSign > 150)
        Form::GradeTooLowException();
    // std::cout << "Form parameter constructor called" << std::endl;
}
Form::Form(const Form& formCopy): n                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               ame(formCopy.name), gradeToSign(formCopy.gradeToSign), gradeToExecute(gradeToExecute){
    isSigned = 0;
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
    // std::cout << "Form destructor called" << std::endl;
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
bool Form::getSign( void ){
    return (isSigned);
}

std::ostream& operator<<(std::ostream& o, const Form formCopy){
    o << "name: " << formCopy.getName() << std::endl;
    o << "grade to sign: " << formCopy.getGradeToSign() << std::endl;
    o << "grade to execute: " << formCopy.getGradeToExecute() << std::endl;
    return o;
}

