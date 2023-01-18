#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 0, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 0, 25, 5) , target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): Form("PresidentialPardonForm", 0, 25, 5) , target(obj.target)
{
    *this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
        this->target = obj.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned())
    {
        if (this->getexecGrade() < executor.getGrade())
            throw GradeTooLowException();
    }
    else
    {
        if (executor.getGrade() < 1)
            throw GradeTooHighException();
        else if (executor.getGrade() > 150 || executor.getGrade())
            throw GradeTooLowException();
    }
    std::cout << "The " << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
    return this->target;
}

std::ostream& operator<<(std::ostream& out, const PresidentialPardonForm  &obj)
{
    out << "Form" << obj.getName();
    return (out);
}