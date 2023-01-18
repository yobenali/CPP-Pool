#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a = Bureaucrat("hated", 11);
        a.GradeIncrement();

        std::cout << a;
        Bureaucrat b = Bureaucrat("hated", 151);
        std::cout << b ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
