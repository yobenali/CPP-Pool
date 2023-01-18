#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
# include "Bureaucrat.hpp" 

class Intern
{
public:
    Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    ~Intern();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
    Form *makeForm(const std::string name, const std::string target) const;
};

#endif