#include "Form.hpp"

Form::Form(): name("Uknown"), signGrade(0), execGrade(0)
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
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor" << std::endl;
}

void    Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > 150)
        throw GradeTooLowException();
    else if (obj.getGrade() < 1)
        throw GradeTooHighException();
    this->isSigned = 1;
}

std::string Form::getName() const
{
    return (this->name);
}

bool    Form::getSigned() const
{
    return (this->isSigned);
}

int    Form::getSignGrade() const
{
    return (this->signGrade);
}

int    Form::getexecGrade() const
{
    return (this->execGrade);
}

std::ostream& operator<<(std::ostream& out, const Form &obj)
{
	out << "Form " << obj.getName() << " is it signed->" << obj.getSigned() << "\nRequired Grade to sign->" << obj.getSignGrade() << "\nRequired Grade to execute->" << obj.getexecGrade() << std::endl;
	return (out);
}