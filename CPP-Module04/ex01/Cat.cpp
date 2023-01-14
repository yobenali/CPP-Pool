#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    *this = obj;
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    std::cout << "Copy assigment called for Cat" << std::endl;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "MeowMeowMeow" << std::endl;
}