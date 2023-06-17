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
    bool getSign( void ) const;

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
    class NotEnoughToExecute : public std::exception{
        public:
        const char *what() const throw();
    };
    class FileCreationException : public std::exception{
        public:
        const char *what() const throw();
    };

    void beSigned(Bureaucrat& bureaucratCopy);
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual AForm* clone(std::string target) = 0;
};

std::ostream& operator<<(std::ostream& o, const AForm& formCopy);


#endif
