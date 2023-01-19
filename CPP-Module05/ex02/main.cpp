#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp" 
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat a = Bureaucrat("hated", 100);
        RobotomyRequestForm y = RobotomyRequestForm("test");
        ShrubberyCreationForm x = ShrubberyCreationForm("xxxxx");
        PresidentialPardonForm z = PresidentialPardonForm("zzzzzz");

        std::cout << a;
        a.signForm(x);
        // a.signForm(y);
        // a.signForm(z);
        a.executeForm(x);
        // a.executeForm(y);
        // a.executeForm(z);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}