#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &obj);
    Animal &operator=(const Animal &obj);
    virtual ~Animal();
    
    std::string const &getType() const ;
    void    makeSound(void) const;
};

#endif