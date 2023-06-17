#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
private:
    const       std::string name;
    bool        isSigned;
    const int   gradeToSign;
    const int   gradeToExecute;
public:
    Form();
    Form(std::string name, int gradeSign, int GradeExec);
    Form(const Form& formCopy);
    Form& operator=(const Form& formCopy);
    ~Form();

    const       std::string getName( void ) const;
    int         getGradeToSign( void ) const;
    int         getGradeToExecute( void ) const ;
    bool        getSign( void ) const;

    class GradeTooHighException : public std::exception{
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public:
        const char *what() const throw();
    };
    class NotEnoughToSign : public std::exception{
    public:
        const char *what() const throw();
    };

    void beSigned(Bureaucrat& bureaucratCopy);
};

std::ostream& operator<<(std::ostream& o, const Form& formCopy);


#endif
