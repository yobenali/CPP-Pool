#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Shrubbery : public Form
{
public:
    Shrubbery(std::string target);
    Shrubbery(const Shrubbery &obj);
    Shrubbery &operator=(const Shrubbery &obj);
    ~Shrubbery();
};
#endif