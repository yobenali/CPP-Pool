#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // try
    // {
    //     Bureaucrat a = Bureaucrat("hated", 1);
    //     RobotomyRequestForm y = RobotomyRequestForm("test");
    //     ShrubberyCreationForm x = ShrubberyCreationForm("xxxxx");
    //     PresidentialPardonForm z = PresidentialPardonForm("zzzzzz");

    //     std::cout << a;
    //     a.signForm(x);
    //     // a.signForm(y);
    //     a.signForm(z);
    //     a.executeForm(x);
    //     a.executeForm(y);
    //     a.executeForm(z);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    try
    { 
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotoy request", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}