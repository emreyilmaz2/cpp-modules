#include "Bureaucrat.hpp"

int main(){
    Bureaucrat a("emre", 25);
    try{
        for(int i=0; i<126; i++)
            a.decrementGrade();
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

    try{
    Bureaucrat bc("sude", 0);
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try{
    Bureaucrat bc("sude", 220);
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }

}
