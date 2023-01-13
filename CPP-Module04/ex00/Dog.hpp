#ifndef Dog_HPP
# define Dog_HPP

# include "Polymorphism.hpp"

class Dog
{
protected:
    std::string type;
public:
    Dog();
    Dog(const Dog &obj);
    ~Dog();
    Dog &operator=(const Dog &obj);
    void    makeSound(void);
};

#endif