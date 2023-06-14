/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emreyilmaz <emreyilmaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:28:26 by emreyilmaz        #+#    #+#             */
/*   Updated: 2023/06/14 15:37:40 by emreyilmaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* Intern::makeForm(const std::string& formName, const std::string& target) {
    // Form yaratıcı fonksiyonların tanımlandığı bir yapı veya dizi
    struct FormCreator {
        std::string name;
        Form* (*creator)(const std::string& target);
    };
    
    // Form yaratıcıları
    FormCreator formCreators[] = {
        { "shrubbery creation", &ShrubberyCreationForm::ShrubberyCreationForm() },
        { "robotomy request", &RobotomyRequestForm:: },
        { "presidential pardon", &PresidentialPardonForm::create }
    };
    
    // Form adına göre yaratıcı fonksiyonu bulma
    for (const auto& formCreator : formCreators) {
        if (formCreator.name == formName) {
            // Yaratıcı fonksiyonu çağırma ve form oluşturma
            Form* form = formCreator.creator(target);
            
            // İlgili çıktıyı basma
            std::cout << "Intern creates " << formName << std::endl;
            
            // Oluşturulan formu döndürme
            return form;
        }
    }
    
    // Geçersiz form adı durumunda hata mesajı basma
    std::cout << "Invalid form name: " << formName << std::endl;
    
    // nullptr döndürme
    return nullptr;
}
