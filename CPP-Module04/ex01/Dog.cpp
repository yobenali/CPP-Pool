#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->DogBrain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
   this->DogBrain = new Brain(*obj.getBrain());
    std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->DogBrain;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->type = obj.type;
    std::cout << "Copy assigment called for Dog" << std::endl;
    return *this;
}

Brain   *Dog::getBrain() const
{
    return (this->DogBrain);
}

void    Dog::makeSound() const
{
    std::cout << "WoufWoufWouf" << std::endl;
}