#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Robotomy : public Form
{
public:
    Robotomy(std::string target);
    Robotomy(const Robotomy &obj);
    Robotomy &operator=(const Robotomy &obj);
    ~Robotomy();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Robotomy &obj);

#endif