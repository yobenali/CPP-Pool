#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat!!";
    std::cout << this->type << "Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    *this = obj;
    std::cout << "Copy Constructer called" << std::endl;
}

WrongCat::~WrongCat()
{
   std::cout << "Default Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.getType();
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}