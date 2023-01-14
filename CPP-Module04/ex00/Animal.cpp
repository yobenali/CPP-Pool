#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Copy Constructer called" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
   std::cout << "Default Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.type;
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "cats don't bark" << std::endl;
}