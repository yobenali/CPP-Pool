#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a = Bureaucrat("hated", 15);
    std::cout << a.getName() << " Bureacrat has grade : " << a.getGrade() << std::endl; 
    return (0);
}