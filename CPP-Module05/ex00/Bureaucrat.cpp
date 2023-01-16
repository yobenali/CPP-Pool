#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("laarbi")
{
    std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade): name(name)
{
    this->grade = setGrade(grade);
    // std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    *this = obj;
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    this->grade = obj.grade;
    std::cout << "Bureaucrat Assigment operator called" << std::endl;
    return *this;
}

const std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::setGrade(unsigned int grade)
{
    this->grade = grade;
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
    return (this->grade);
}

int Bureaucrat::getGrade()
{
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
    return (this->grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}