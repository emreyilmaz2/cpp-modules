#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
private:
    std::string target;
public:
    RobotomyRequestForm(const std::string newTarget);
    RobotomyRequestForm(const RobotomyRequestForm& robo);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& robo);
    ~RobotomyRequestForm();

    void execute(const Bureaucrat & executor) const;
};

#endif