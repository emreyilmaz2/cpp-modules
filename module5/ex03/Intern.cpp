/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emreyilmaz <emreyilmaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:28:26 by emreyilmaz        #+#    #+#             */
/*   Updated: 2023/06/14 15:58:20 by emreyilmaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"


const Intern::FormCreator Intern::formCreators[] = {
    { "shrubbery creation", &Intern::createShrubberyCreationForm },
    { "robotomy request", &Intern::createRobotomyRequestForm },
    { "presidential pardon", &Intern::createPresidentialPardonForm }
};

const int Intern::NUM_FORM_CREATORS = sizeof(Intern::formCreators) / sizeof(Intern::FormCreator);


Form* Intern::makeForm(const std::string& formName, const std::string& target) {
    for (int i = 0; i < NUM_FORM_CREATORS; ++i)
        if (formName == formCreators[i].name)
            return formCreators[i].creator(target);
    std::cout << "Invalid form name: " << formName << std::endl;
    return nullptr;
}

Form* Intern::createShrubberyCreationForm(const std::string& target) {
    Form* formy = ShrubberyCreationForm(target);
    return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyRequestForm(const std::string& target) {
    return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialPardonForm(const std::string& target) {
    return new PresidentialPardonForm(target);
}