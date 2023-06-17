#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "iostream"

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
        const char * what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
        const char * what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif