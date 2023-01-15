#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->CatBrain = new Brain();
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : CatBrain(NULL)
{
    this->CatBrain = new Brain(*obj.getBrain());
    std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->CatBrain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "Copy assigment called for Cat" << std::endl;
    delete this->CatBrain;
    this->CatBrain = new Brain(*obj.getBrain());
    this->type = obj.type;
    return *this;
}

Brain   *Cat::getBrain() const
{
    return (this->CatBrain);
}

void    Cat::makeSound() const
{
    std::cout << "MeowMeowMeow" << std::endl;
}