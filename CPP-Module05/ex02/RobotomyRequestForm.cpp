 #include "RobotomyRequestForm.hpp"
 
Robotomy::Robotomy(std::string target)
{
    int acc = rand();
    if (acc % 2)
    {
        std::cout << "Robotomy making some drilling noises!!!" << std::endl;
        std::cout << "The " << target << " has been robotomized successfully" << std::endl;
    }
    else
        std::cout << "The " << target << " has been failed :(" << std::endl;
}

Robotomy::Robotomy(const Robotomy &obj)
{
    *this = obj;
}

Robotomy &Robotomy::operator=(const Robotomy &obj)
{
    *this = obj;
    return (*this);
}

Robotomy::~Robotomy()
{
}