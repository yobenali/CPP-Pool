#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a = Bureaucrat("hated", 11);
        std::cout << a;
        Bureaucrat b = Bureaucrat("hated", 15);
        std::cout << b ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}