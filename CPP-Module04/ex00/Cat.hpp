#ifndef CAT_HPP
# define CAT_HPP

# include "Polymorphism.hpp"

class Cat
{
protected:
    std::string type;
public:
    Cat();
    Cat(const Cat &obj);
    ~Cat();
    Cat &operator=(const Cat &obj);
    void    makeSound(void);
};

#endif