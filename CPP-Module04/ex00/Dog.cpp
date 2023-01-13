#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    std::cout << "Copy assigment called for Dog" << std::endl;
}

void    Dog::makeSound()
{
    std::cout << "WoufWoufWouf" << std::endl;
}