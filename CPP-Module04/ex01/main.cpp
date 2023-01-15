#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
const Animal* j = new Dog();
const Animal* i = new Cat();
const Dog a;
const Dog  b = a;

delete j;//should not create a leak delete i;
delete i;
system("leaks Animal");
return 0; }