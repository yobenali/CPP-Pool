#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal!!";
    std::cout << "Default Constructor called For " << this->type << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Constructor called For " << this->type << std::endl;
}

std::string const &Animal::getType() const
{
    return this->type;
}

Animal::Animal(const Animal &obj)
{
    *this = obj;
    std::cout << "Copy Constructer called" << std::endl;
}

Animal::~Animal()
{
   std::cout << "Default Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.getType();
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "cats don't bark" << std::endl;
}