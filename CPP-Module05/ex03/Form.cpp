#include "Form.hpp"

Form::Form(): name("Uknown"), isSigned(0) , signGrade(45), execGrade(45)
{
    // std::cout << "Default Form Constructor" << std::endl;
}

Form::Form(std::string const pName, bool pIsSigned, const int pSignGrade, const int pExecGrade): name(pName), isSigned(pIsSigned), signGrade(pSignGrade), execGrade(pExecGrade)
{
    // std::cout << "Form Constructer Called" << std::endl;
}

Form::Form(const Form &obj): name(obj.name), isSigned(obj.isSigned), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
    // std::cout << "Form copy Constructor" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
    this->isSigned = obj.isSigned;
    // std::cout << "Form Assigment operator" << std::endl;
    return *this;
}

Form::~Form()
{
    // std::cout << "Form Destructor" << std::endl;
}

void    Form::beSigned(Bureaucrat const &obj)
{
    if (obj.getGrade() < 1)
        throw GradeTooHighException();
    else if (obj.getGrade() > 150)
        throw GradeTooLowException();
    else if (obj.getGrade() <= this->signGrade)
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

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

std::ostream& operator<<(std::ostream& out, const Form &obj)
{
	out << "\nForm " << obj.getName() << " is it signed->" << obj.getSigned() << "\nRequired Grade to sign->" << obj.getSignGrade() << "\nRequired Grade to execute->" << obj.getexecGrade();
	return (out);
}

void    Form::execute(Bureaucrat const &executor) const
{
    if (this->getSigned())
    {
        if (this->getexecGrade() > executor.getGrade())
            throw GradeTooLowException();
    }
    else
    {
        if (executor.getGrade() < 1)
            throw GradeTooHighException();
        else if (executor.getGrade() > 150 || executor.getGrade() > this->getexecGrade())
            throw GradeTooLowException();
    }
}