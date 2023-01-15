#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Animal* meta = new Animal();
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    const WrongAnimal* turtl = new WrongAnimal();
    const WrongAnimal* rtl = new WrongCat();
    rtl->makeSound();
    turtl->makeSound();
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
    delete i;
    delete j;
    delete turtl;
    delete rtl;
    // system("leaks Animal");
    return 0; 
}