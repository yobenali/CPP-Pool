#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Presidential : public Form
{
public:
    Presidential(std::string target);
    Presidential(const Presidential &obj);
    Presidential &operator=(const Presidential &obj);
    ~Presidential();

    class GradeTooHighException : public std::exception
    {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, const Presidential &obj);

#endif