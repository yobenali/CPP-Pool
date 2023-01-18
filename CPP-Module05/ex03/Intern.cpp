#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructer Called" << std::endl; 
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
    std::cout << "Intern Constructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &obj)
{
    std::cout << "Assigment Operator called" << std::endl;
    if (this != &obj)
        return (*this);    
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Form* Intern::makeForm(const std::string name, const std::string target)
{
    int x = -1;
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == name)
        {
            x = i;
            break;
        }
    }
    switch (x)
    {
    case 0:
    {
        std::cout << "Intern creates " << name << std::endl;
        return new ShrubberyCreationForm(target);
    }
    case 1:
    {
        std::cout << "Intern creates " << name << std::endl;
        return new RobotomyRequestForm(target);
    }
    case 2:
    {
        std::cout << "Intern creates " << name << std::endl;
        return new PresidentialPardonForm(target);
    }
    }
    throw GradeTooLowException();
}

const char *Intern::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char *Intern::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}
