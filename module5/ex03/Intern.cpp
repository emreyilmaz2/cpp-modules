/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emreyilmaz <emreyilmaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:28:26 by emreyilmaz        #+#    #+#             */
/*   Updated: 2023/06/14 16:06:52 by emreyilmaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    forms[0] = new PresidentialPardonForm();
    forms[1] = new ShrubberyCreationForm();
    forms[2] = new RobotomyRequestForm();
    // std::cout << "Intern default constructor called" << std::endl;
}
Intern::Intern(const Intern& internCopy){
    (void)internCopy;
    forms[0] = new PresidentialPardonForm();
    forms[1] = new ShrubberyCreationForm();
    forms[2] = new RobotomyRequestForm();
    // std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& internCopy){
    (void)internCopy;
    forms[0] = new PresidentialPardonForm();
    forms[1] = new ShrubberyCreationForm();
    forms[2] = new RobotomyRequestForm();
    // std::cout << "Intern copy constructor called" << std::endl;
    return (*this);
}
Intern::~Intern(){
    // std::cout << "Intern destructor called" << std::endl;
}

const char	*Intern::FormNotFound::what() const throw() {
	return ("Form Not Found");
}

std::string handleString(std::string str)
{
    int i = -1;
    std::string newstr;
    while(str[++i])
    {
        if(!(str[i] <= 32))
            newstr += str[i];
    }
    return newstr;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target){
    bool isCreated = false;
    AForm* formy;
    std::string aForm[3] = {"presidentialpardon", "shrubberycreation", "robotomyrequest"};
    for(int i = 0; i < 3; i++){
        std::cout << handleString(aForm[i]) << std::endl;
        if(formName.compare(handleString(aForm[i])))
        {
            formy = forms[i]->clone(target);
            isCreated = true;
            break;
        }
    }
    if(isCreated){
        std::cout << "Intern Creates " + formName << std::endl;
        return formy;
    }
    else
        throw Intern::FormNotFound();
}