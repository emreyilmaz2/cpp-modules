#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class Bureaucrat{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(const Bureaucrat& bureaucratCopy);
    Bureaucrat& operator=(const Bureaucrat& bureaucratCopy);
    ~Bureaucrat();
    
    std::string getName() const;
    int         getGrade() const;
    void        incrementGrade();
    void        decrementGrade();
    class GradeTooHighException : public std::exception{
    public:
        GradeTooHighException();
    };
    class GradeTooLowException : public std::exception{
        public:
        GradeTooLowException();
    };

    void signForm( const AForm& aform ) const;
    void executeForm(const AForm& form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif