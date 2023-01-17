#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Robotomy : public Form
{
private:
    std::string target;
public:
    Robotomy(std::string target);
    Robotomy(const Robotomy &obj);
    Robotomy &operator=(const Robotomy &obj);
    ~Robotomy();
};

#endif