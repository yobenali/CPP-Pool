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

Animal::Animal(const Animal &obj)
{
    *this = obj;
    std::cout << this->type << "Copy Constructer called" << std::endl;
}

Animal::~Animal()
{
   std::cout << "Default Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    this->type = obj.getType();
    std::cout << this->type << "Copy assigment operator called" << std::endl;
    return *this;
}

std::string const &Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "cats don't bark" << std::endl;
}