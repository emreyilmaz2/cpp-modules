#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm(newTarget, 145, 137){
    // std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > getGradeToExecute())
        throw AForm::NotEnoughToExecute();
    else if(!getSign())
        throw AForm::NotEnoughToSign();
    std::string result = getName() + "_shrubbery";
    std::cout << result << std::endl;
    std::ofstream file(result);
    if(file.is_open()){
    file << "               _{\\ _{\\{\\/}/}/}__" << std::endl;
    file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    file << "            {/{/\\}{/{/\\}(_)}{/{/\\}  _" << std::endl;
    file << "         {\\{/(/}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    file << "        {/{/(_)/}{\\{/)/}{\\(_){/}/}/}/}" << std::endl;
    file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    file << "      {/{/{\\{\\{(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    file << "      _{\\{/{\\{/(_)/}/}{/{/{/\\}\\)(\\}{/\\}" << std::endl;
    file << "     {/{/{\\{(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
    file << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/)(/}" << std::endl;
    file << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
    file << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
    file << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
    file << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
    file << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
    file << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
    file << "             {/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
    file << "              {){/ {\\/}{\\/} \\}\\}" << std::endl;
    file << "              (_)  \\.-'.-/" << std::endl;
    file << "          __...--- |'-.-'| --...__" << std::endl;
    file << "   _...--\"   .-'  |'-.-'|  ' -.  \"\"--..__" << std::endl;
    file << " -\"    ' .  . '   |.'-._| '  . .  '   jro" << std::endl;
    file << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
    file << "          ' ..     |'-_.-|" << std::endl;
    file << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
    file << "              .'   |'- .-|   '." << std::endl;
    file << "  ..-'   ' .  '.   `-._-_.'   .'  '  - ." << std::endl;
    file << "   .-' '        '-._______.-'     '  ." << std::endl;
    file << "        .      ~," << std::endl;
    file.close();
    }
    else
        throw AForm::FileCreationException();
}

    
ShrubberyCreationForm::~ShrubberyCreationForm(){
    // std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}