#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal!!";
    std::cout << "Default Constructor called For " << this->type << std::endl;
}

std::string const &WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    *this = obj;
    std::cout << "Copy Constructer called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
   std::cout << "Default Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    this->type = obj.getType();
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}