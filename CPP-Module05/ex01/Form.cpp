#include "Form.hpp"

Form::Form(): signGrade(0), execGrade(0)
{
    std::cout << "Form Constructor" << std::endl;
}

Form::Form(const Form &obj)
{
    std::cout << "Form copy Constructor" << std::endl;
}

Form &Form::operator=(const Form &obj)
{

}

Form::~Form()
{
    std::cout << "Form Destructor" << std::endl;
}