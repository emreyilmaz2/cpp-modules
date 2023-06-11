#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm(newTarget, 72, 45){
    // std::cout << "RobotomyRequest default constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robo) : AForm(robo.getName(), 72, 45){
    // std::cout << "RobotomyRequest copy constructor called" << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robo){
    if(this != &robo)
        AForm::operator=(robo);
    // std::cout << "RobotomyRequest copy assignment opearator called" << std::endl;
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    // std::cout << "RobotomyRequest destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if(executor.getGrade() > getGradeToExecute())
        throw AForm::NotEnoughToExecute();
    else if(!getSign())
        throw AForm::NotEnoughToSign();
    std::cout << "#      ----.                           #" << std::endl;
    std::cout << "#     \"   _}                           #" << std::endl;
    std::cout << "#     \"@   >                           #" << std::endl;
    std::cout << "#      |\\   7                          #" << std::endl;
    std::cout << "#      / `-- _         ,-------,****   #" << std::endl;
    std::cout << "#   ~    >o<  \\---------o{___}-        #" << std::endl;
    std::cout << "#  /  |  \\  /  ________/8'             #" << std::endl;
    std::cout << "#  |  |       /         \"              #" << std::endl;
    std::cout << "#  |  /      |                         #" << std::endl;   
}