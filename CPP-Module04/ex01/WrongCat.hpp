#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "wrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        virtual ~WrongCat();

        void makeSound() const;
};

#endif