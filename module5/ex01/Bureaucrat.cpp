#include "Bureaucrat.hpp"
#include "Form.hpp"

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

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return("\n <<< Grade's been reahed the up limit 1 >>> \n");
}
const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return("\n <<< Grade's been reahed the down limit 150 >>> \n");
}

void Bureaucrat::signForm(const Form& formCopy) const{
    if(formCopy.getSign())
        std::cout << getName() << " signed " << formCopy.getName() << std::endl;
    else if(getGrade() > formCopy.getGradeToSign())
        std::cout << getName() << " couldn't sign " << formCopy.getName() << "because the grade is too low" << std::endl;
}