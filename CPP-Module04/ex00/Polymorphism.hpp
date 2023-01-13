#ifndef POLYMORPHISM_CPP
# define POLYMORPHISM_CPP

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &obj);
    ~Animal();
    Animal &operator=(const Animal &obj);
    void    makeSound(void);
};

#endif