#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"

class Form{
private:
    const std::string   name;
    bool                isSign;
    const int           gradeToSign;
    const int           gradeToExecute;

public:
    class GradeTooHighException : public std::exception{
        public:
        GradeTooHighException();
    };
    class GradeTooLowException : public std::exception{
        public:
        GradeTooLowException();
    };
};

#endif