#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    size_t index = (rand() % 3);
    Base *rValue = NULL;

    try
    {
        if (index == 0)
            rValue = dynamic_cast<Base *> (new A);
        else if (index == 1)
            rValue = dynamic_cast<Base *> (new B);
        else if (index == 2)
            rValue = dynamic_cast<Base *> (new C);
        return (rValue);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*> (p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*> (p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C*> (p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    Base    b;

    try {
        b = dynamic_cast<A&> (p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e) {}

    try {
        b = dynamic_cast<B&> (p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e) {}
 
    try {
        b = dynamic_cast<C&> (p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e) {} 
}

int main(void)
{
    Base *stPtr;
    Base *scPtr;

    srand(time(NULL));
    stPtr = generate();
    scPtr = generate();


    std::cout << "POINTER\n";
    identify(stPtr);
    identify(scPtr);

    std::cout << "REFERENCE\n";
    identify(*stPtr);
    identify(*scPtr);

}