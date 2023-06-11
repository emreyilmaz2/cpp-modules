#include "Bureaucrat.hpp"

// not sure these constructors and destructor should be in this class because it may be an exception class
Bureaucrat::Bureaucrat() : _name("Ece Su"), _grade(1){
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade){
    if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat parameter constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& bureaucratCopy) : _name(bureaucratCopy._name), _grade(bureaucratCopy._grade){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucratCopy){
    if(this != &bureaucratCopy){
        *const_cast<std::string*>(&_name) = bureaucratCopy.getName(); // const bir degiskeni degistirmeye calisirsak boyle bir islem yapmamiz gerekiyor
        _grade = bureaucratCopy.getGrade();
    }
    std::cout << "Bureaucrat copy assigment operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}

int Bureaucrat::getGrade() const {
    return _grade;
}
std::string Bureaucrat::getName() const{
    return _name;
}

void Bureaucrat::incrementGrade(){
    if(_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade(){
    if(_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat){
    os << "Bureaucrat: " << bureaucrat.getName() << "'s grade: " << bureaucrat.getGrade() << std::endl;
    return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
    std::cout << std::endl << "<<<<<<<<<<<<<<ERROR>>>>>>>>>>>>>>>" << std::endl;
    std::cout << "Grade's been reahed the up limit 1" << std::endl;
    std::cout << "<<<<<<<<<<<<<<ERROR>>>>>>>>>>>>>>>" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
    std::cout << std::endl << "<<<<<<<<<<<<<<<<ERROR>>>>>>>>>>>>>>>>" << std::endl;
    std::cout << "Grade's been reahed the down limit 150" << std::endl;
    std::cout << "<<<<<<<<<<<<<<<<ERROR>>>>>>>>>>>>>>>>" << std::endl;
}

void Bureaucrat::signForm(const AForm& aform) const{
    if(aform.getSign())
        std::cout << getName() << " signed the form '" << aform.getName() << "'" << std::endl;
    else
        std::cout << getName() << " could not sign form: " << aform.getName() << " because the grade is too low!!" << std::endl;
}
void Bureaucrat::executeForm(const AForm& form){
    form.execute(*this);
    std::cout << getName() + " executed " + form.getName() << std::endl;
}