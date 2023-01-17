#include "Form.hpp"

Form::Form(): isSigned(0) , name("Form"), signGrade(0), execGrade(0)
{
    std::cout << "Form Constructor" << std::endl;
}

Form::Form(const Form &obj): name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
    std::cout << "Form copy Constructor" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
    this->isSigned = obj.isSigned;
    std::cout << "Form Assigment operator" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor" << std::endl;
}

void    Form::beSigned()
{
    
}