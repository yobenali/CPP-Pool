#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    // const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    const Dog a;
    const Dog  b = a;
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    i->makeSound();
    j->makeSound();
    a.makeSound();
    b.makeSound();
    // meta->makeSound();
    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n";
    delete j;
    delete i;
    // system("leaks Animal");
    return 0; 
}