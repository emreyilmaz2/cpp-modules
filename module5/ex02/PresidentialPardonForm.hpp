#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "AForm.hpp"

class PresindentalPardonForm : public AForm{
private:
    std::string target;
public:
    PresindentalPardonForm(const std::string newTarget);
    PresindentalPardonForm(const PresindentalPardonForm& preCopy);
    PresindentalPardonForm& operator=(const PresindentalPardonForm& preCopy);
    ~PresindentalPardonForm();

    void execute(const Bureaucrat& executor) const;
};

#endif