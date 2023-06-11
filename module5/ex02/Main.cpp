#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
    try{
        Bureaucrat buro("emre", 44 );
        ShrubberyCreationForm shrub("emres");
        RobotomyRequestForm robo("target_robo");
        robo.beSigned(buro);
        shrub.beSigned(buro);
        shrub.execute(buro);
        robo.execute(buro);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}
