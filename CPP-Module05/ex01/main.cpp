#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a = Bureaucrat("hated", 11);
        Form x = Form("Form", 0, 16, 16);
        Form y = Form();
        std::cout << a;
        a.signForm(x);
        a.signForm(y);
        Bureaucrat b = Bureaucrat("hated", 15);
        std::cout << b ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}