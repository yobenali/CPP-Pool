#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Shrubbery : public Form
{
private:
    std::string target;
public:
    Shrubbery(std::string target);
    Shrubbery(const Shrubbery &obj);
    Shrubbery &operator=(const Shrubbery &obj);
    ~Shrubbery();
    int s;
};
#endif