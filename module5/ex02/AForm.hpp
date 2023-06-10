#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class AForm{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
public:
    AForm();
    AForm(std::string name, int gradeSign, int GradeExec);
    AForm(const AForm& formCopy);
    AForm& operator=(const AForm& AformCopy);
    virtual ~AForm();

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
    virtual void execute() const = 0;
};

std::ostream& operator<<(std::ostream& o, const AForm& formCopy);


#endif
