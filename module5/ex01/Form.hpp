#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    Form();
    Form(std::string name, int gradeSign, int GradeExec);
    Form(const Form& formCopy);
    Form& operator=(const Form& formCopy);
    ~Form();

    std::string getName( void ) const;
    int getGradeToSign( void ) const;
    int getGradeToExecute( void ) const ;
    bool getSign( void );

    class GradeTooHighException : public std::exception{
        public:
        GradeTooHighException();
    };
    class GradeTooLowException : public std::exception{
        public:
        GradeTooLowException();
    };

    void beSigned(Bureaucrat& bureaucratCopy);
};

std::ostream& operator<<(std::ostream& o, const Form formCopy);


#endif
