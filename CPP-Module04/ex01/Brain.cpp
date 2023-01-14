#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    *this = obj;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Copy assigment called for Brain" << std::endl;
    return *this;
}
